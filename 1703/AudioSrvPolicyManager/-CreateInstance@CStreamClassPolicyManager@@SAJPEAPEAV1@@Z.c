/*
 * XREFs of ?CreateInstance@CStreamClassPolicyManager@@SAJPEAPEAV1@@Z @ 0x180017AD8
 * Callers:
 *     ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x180004370 (-Initialize@CWindowsPolicyManager@@IEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 */

__int64 __fastcall CStreamClassPolicyManager::CreateInstance(struct CStreamClassPolicyManager **a1)
{
  HANDLE ProcessHeap; // rax
  struct CStreamClassPolicyManager *v3; // rax
  struct CStreamClassPolicyManager *v4; // rdx
  unsigned int v5; // ebx

  ProcessHeap = GetProcessHeap();
  v3 = (struct CStreamClassPolicyManager *)HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v4 = v3;
  if ( v3 )
  {
    *((_QWORD *)v3 + 1) = 0LL;
    *(_QWORD *)v3 = &CStreamClassPolicyManager::`vftable'{for `CRefCountedObject'};
    *((_QWORD *)v3 + 2) = &CStreamClassPolicyManager::`vftable'{for `IStreamClassPolicyManager'};
    *((_DWORD *)v3 + 2) = 1;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
    *a1 = v4;
  v5 = v4 == 0LL ? 0x8007000E : 0;
  if ( !v4 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_ebe8a60df1f9346dc18a4000ebfedf98_Traceguids, v5);
    }
    AudPolicyLogError("CStreamClassPolicyManager::CreateInstance", 57, v5);
  }
  return v5;
}
