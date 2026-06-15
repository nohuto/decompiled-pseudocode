/*
 * XREFs of ?SetProcessDataFlowAccessCheckResults@CWindowsPolicyManager@@UEAAJPEBG00_N@Z @ 0x180004630
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowsPolicyManager::SetProcessDataFlowAccessCheckResults(
        CWindowsPolicyManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  CApplicationManager *v4; // rbx
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  int v9; // ecx
  _DWORD *v10; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+38h] [rbp-10h]

  v4 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v13 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v7 = (_QWORD *)*((_QWORD *)v4 + 14);
  while ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    if ( (!a2 || CompareStringOrdinal(a2, -1, *(LPCWCH *)(v8 + 208), -1, 1) == 2)
      && (!a3 || CompareStringOrdinal(a3, -1, *(LPCWCH *)(v8 + 192), -1, 1) == 2) )
    {
      v9 = 0;
      v10 = (_DWORD *)(v8 + 216);
      do
      {
        ++v9;
        *v10++ = -2147023728;
      }
      while ( (unsigned __int64)v9 < 2 );
    }
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
