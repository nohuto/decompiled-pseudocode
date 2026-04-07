/*
 * XREFs of ?StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z @ 0x180003AB8
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180007384 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18000357C (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

void __fastcall CWindowPropertyTracker::StopTrackingStoryboard(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2)
{
  int v4; // ebx
  signed int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // edx
  __int64 v10; // r9
  __int64 v11; // rdx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *((_DWORD *)this + 6);
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 >= 0 )
    {
      v6 = 8LL * v5;
      do
      {
        v7 = 0LL;
        v8 = *(_QWORD *)(v6 + *(_QWORD *)this);
        v9 = *(_DWORD *)(v8 + 32);
        v10 = *(_QWORD *)(v8 + 8);
        if ( v9 )
        {
          do
          {
            if ( a2 == *(const struct CStoryboard **)(v10 + 8 * v7) )
              break;
            v7 = (unsigned int)(v7 + 1);
          }
          while ( (unsigned int)v7 < v9 );
        }
        if ( (unsigned int)v7 < v9 )
        {
          if ( (unsigned int)v7 < v9 - 1 )
          {
            do
            {
              v11 = (unsigned int)(v7 + 1);
              *(_QWORD *)(v10 + 8 * v7) = *(_QWORD *)(v10 + 8 * v11);
              v7 = v11;
            }
            while ( (unsigned int)v11 < *(_DWORD *)(v8 + 32) - 1 );
          }
          --*(_DWORD *)(v8 + 32);
        }
        if ( !*(_DWORD *)(*(_QWORD *)(v6 + *(_QWORD *)this) + 32LL) )
          CWindowPropertyTracker::_StopTrackingWindowByIndex(this, v5);
        v6 -= 8LL;
        --v5;
      }
      while ( v5 >= 0 );
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
}
