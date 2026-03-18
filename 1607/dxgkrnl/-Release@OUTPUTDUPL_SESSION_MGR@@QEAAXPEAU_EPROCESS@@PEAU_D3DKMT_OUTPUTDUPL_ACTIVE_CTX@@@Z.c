/*
 * XREFs of ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C017DF28
 * Callers:
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C0182E70 (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ @ 0x1C017E688 (-TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::Release(
        struct DXGFASTMUTEX **this,
        struct _EPROCESS *a2,
        struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // r8d
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdi
  __int128 v13; // rtt
  unsigned int v14; // edx
  __int64 v15; // r9
  __int64 v16; // rax
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, this[1]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v6 = 0LL;
  v7 = *((_DWORD *)this + 1);
  v8 = *(_QWORD *)this[2];
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = 32LL * (unsigned int)v6;
      if ( a2 == *(struct _EPROCESS **)(v9 + v8 + 8) )
      {
        v10 = *(_DWORD *)(v9 + v8);
        if ( v10 )
          break;
      }
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v7 )
        goto LABEL_9;
    }
    v11 = v10 - 1;
    v12 = 32LL * (unsigned int)v6;
    *(_DWORD *)(v12 + v8) = v11;
    if ( !v11 )
    {
      v13 = (__int64)(*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - *(_QWORD *)(v12 + v8 + 16));
      *(_DWORD *)(v12 + v8 + 24) += v13 / PerformanceFrequency.QuadPart;
      if ( a2 == this[6] )
        this[6] = 0LL;
    }
  }
LABEL_9:
  if ( a3 )
  {
    v14 = *((_DWORD *)this + 14);
    v15 = 0LL;
    if ( v14 )
    {
      while ( 1 )
      {
        if ( this[3 * v15 + 8] == *(struct DXGFASTMUTEX **)a3 && LODWORD(this[3 * v15 + 10]) == *((_DWORD *)a3 + 4) )
        {
          v6 = 3 * v15;
          if ( LODWORD(this[3 * v15 + 9]) == *((_DWORD *)a3 + 2) && HIDWORD(this[3 * v15 + 9]) == *((_DWORD *)a3 + 3) )
            break;
        }
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= v14 )
          goto LABEL_16;
      }
      memmove(
        &this[2 * v15 + 8] + v15,
        &this[2 * (unsigned int)(v15 + 1) + 8] + (unsigned int)(v15 + 1),
        24LL * (v14 - (unsigned int)v15 - 1));
      --*((_DWORD *)this + 14);
      OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF((OUTPUTDUPL_SESSION_MGR *)this);
    }
    else
    {
LABEL_16:
      v16 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v16 + 24) = 4014LL;
      WdLogEvent5_WdAssertion(v16);
    }
  }
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
}
