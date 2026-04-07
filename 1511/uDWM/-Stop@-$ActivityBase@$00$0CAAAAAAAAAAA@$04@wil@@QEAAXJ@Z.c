/*
 * XREFs of ?Stop@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXJ@Z @ 0x180077E8C
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180075E84 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x180078624 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18003E74C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXXZ @ 0x18007665C (-IgnoreCurrentThread@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180076A84 (-LockExclusive@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage.c)
 *     ?ReportStopActivity@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAAXJ@Z @ 0x180077684 (-ReportStopActivity@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAAXJ@Z.c)
 *     ?SetStopResult@ActivityData@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA_NJPEAJ@Z @ 0x180077D00 (-SetStopResult@ActivityData@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA_NJPEAJ@Z.c)
 */

void __fastcall wil::ActivityBase<1,35184372088832,5>::Stop(__int64 a1, int a2)
{
  bool v4; // di
  const struct _TlgProvider_t *v5; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v7; // [rsp+38h] [rbp-9h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+68h] [rbp+27h]
  int v11; // [rsp+70h] [rbp+2Fh]
  int v12; // [rsp+74h] [rbp+33h]
  DWORD *v13; // [rsp+78h] [rbp+37h]
  int v14; // [rsp+80h] [rbp+3Fh]
  int v15; // [rsp+84h] [rbp+43h]

  wil::ActivityBase<1,35184372088832,5>::LockExclusive(a1, &SRWLock);
  v4 = wil::ActivityBase<1,35184372088832,5>::ActivityData::SetStopResult(*(_QWORD *)(a1 + 48), a2, &v7);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v4 )
  {
    wil::ActivityBase<1,35184372088832,5>::ReportStopActivity(a1);
  }
  else
  {
    v5 = *(const struct _TlgProvider_t **)(*(_QWORD *)(a1 + 48) + 40LL);
    if ( *(_DWORD *)v5 > 5u )
    {
      v12 = 0;
      LODWORD(SRWLock) = a2;
      v11 = 4;
      p_SRWLock = &SRWLock;
      CurrentThreadId = GetCurrentThreadId();
      v15 = 0;
      v7 = CurrentThreadId;
      v13 = &v7;
      v14 = 4;
      TlgWrite(v5, &unk_1800A9566, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  wil::ActivityBase<1,35184372088832,5>::IgnoreCurrentThread(a1);
}
