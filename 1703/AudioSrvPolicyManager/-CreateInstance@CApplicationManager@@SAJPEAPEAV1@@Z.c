/*
 * XREFs of ?CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z @ 0x180010E64
 * Callers:
 *     ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x180004370 (-Initialize@CWindowsPolicyManager@@IEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000A3F4 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::CreateInstance(struct CApplicationManager **a1)
{
  int v2; // ebx
  HANDLE ProcessHeap; // rax
  char *v4; // rax
  char *v5; // rdi

  v2 = a1 == 0LL ? 0x80004003 : 0;
  if ( !a1 || g_ApplicationManager )
  {
LABEL_9:
    if ( v2 >= 0 )
      return (unsigned int)v2;
    goto LABEL_10;
  }
  ProcessHeap = GetProcessHeap();
  v4 = (char *)HeapAlloc(ProcessHeap, 0, 0xA0uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *(_QWORD *)v4 = &CApplicationManager::`vftable';
    *((_QWORD *)v4 + 2) = 0LL;
    ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(v4 + 24));
    *((_QWORD *)v5 + 8) = 0LL;
    *((_QWORD *)v5 + 9) = 0LL;
    *((_QWORD *)v5 + 10) = 0LL;
    *((_QWORD *)v5 + 11) = 0LL;
    *((_QWORD *)v5 + 12) = 0LL;
    *((_DWORD *)v5 + 26) = 10;
    *((_QWORD *)v5 + 14) = 0LL;
    *((_QWORD *)v5 + 15) = 0LL;
    *((_QWORD *)v5 + 16) = 0LL;
    *((_QWORD *)v5 + 17) = 0LL;
    *((_QWORD *)v5 + 18) = 0LL;
    *((_DWORD *)v5 + 38) = 10;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v2 = 0;
    *a1 = (struct CApplicationManager *)v5;
    goto LABEL_9;
  }
  v2 = -2147024882;
LABEL_10:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids, v2);
  }
  AudPolicyLogError("CApplicationManager::CreateInstance", 393, v2);
  return (unsigned int)v2;
}
