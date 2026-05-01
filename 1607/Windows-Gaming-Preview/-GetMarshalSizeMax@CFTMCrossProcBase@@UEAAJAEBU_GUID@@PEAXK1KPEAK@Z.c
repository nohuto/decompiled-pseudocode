/*
 * XREFs of ?GetMarshalSizeMax@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x180020680
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180020A20 (-_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFTMCrossProcBase::GetMarshalSizeMax(
        CFTMCrossProcBase *this,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rsi
  int FTM; // ebx
  _QWORD *v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  void *v16; // rcx
  void *v18; // [rsp+40h] [rbp-38h] BYREF

  v7 = a7;
  v18 = 0LL;
  *a7 = 0;
  FTM = CFTMCrossProcBase::_GetFTM((LPUNKNOWN)this, a2, &v18);
  if ( FTM < 0 )
    goto LABEL_12;
  FTM = (*(__int64 (__fastcall **)(void *, const struct _GUID *, void *, _QWORD, void *, unsigned int, unsigned int *))(*(_QWORD *)v18 + 32LL))(
          v18,
          a2,
          a3,
          a4,
          a5,
          a6,
          v7);
  if ( FTM < 0 )
    goto LABEL_12;
  if ( a4 == 3 )
    goto LABEL_12;
  v13 = (_QWORD *)(*(__int64 (__fastcall **)(CFTMCrossProcBase *))(*(_QWORD *)this + 88LL))(this);
  if ( *(_QWORD *)&GUID_NULL.Data1 == *v13 && *(_QWORD *)GUID_NULL.Data4 == v13[1] )
    goto LABEL_12;
  FTM = (*(__int64 (__fastcall **)(CFTMCrossProcBase *, const struct _GUID *, void *, _QWORD, void *, unsigned int, unsigned int **))(*(_QWORD *)this + 72LL))(
          this,
          a2,
          a3,
          a4,
          a5,
          a6,
          &a7);
  if ( FTM < 0 )
    goto LABEL_12;
  _InterlockedExchange((volatile __int32 *)this + 6, (__int32)a7);
  v14 = *((_DWORD *)this + 6);
  if ( v14 + 4 >= v14 )
  {
    v15 = *v7 + v14 + 4;
    if ( v15 >= *v7 )
    {
      *v7 = v15;
      FTM = 0;
      goto LABEL_12;
    }
    *v7 = -1;
  }
  FTM = -2147024362;
LABEL_12:
  v16 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return (unsigned int)FTM;
}
