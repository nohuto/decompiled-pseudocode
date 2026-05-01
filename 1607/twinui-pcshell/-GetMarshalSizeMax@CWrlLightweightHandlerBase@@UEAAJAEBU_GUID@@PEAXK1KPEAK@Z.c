/*
 * XREFs of ?GetMarshalSizeMax@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x18002DB60
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002DF6C (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIMarshal@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIMarshal@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18002E0B8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIMarshal@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@UI.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::GetMarshalSizeMax(
        CWrlLightweightHandlerBase *this,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rdi
  void **v12; // rax
  const struct _GUID *v13; // rdx
  int StdMarshaler; // ebx
  unsigned int *v15; // rsi
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF

  v7 = a7;
  v19 = 0LL;
  *a7 = 0;
  v12 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IMarshal>>(&v19);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v13, v12);
  if ( StdMarshaler >= 0 )
  {
    StdMarshaler = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void *, _QWORD, void *, unsigned int, unsigned int **))(*(_QWORD *)v19 + 32LL))(
                     v19,
                     a2,
                     a3,
                     a4,
                     a5,
                     a6,
                     &a7);
    if ( StdMarshaler >= 0 )
    {
      v15 = (unsigned int *)((char *)this + 8);
      StdMarshaler = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *, const struct _GUID *, void *, _QWORD, void *, unsigned int, char *))(*(_QWORD *)this + 80LL))(
                       this,
                       a2,
                       a3,
                       a4,
                       a5,
                       a6,
                       (char *)this + 8);
      if ( StdMarshaler >= 0 )
      {
        v16 = *v15 + 4;
        if ( v16 >= *v15 )
        {
          if ( v16 + (unsigned int)a7 >= (unsigned int)a7 )
          {
            *v7 = v16 + (_DWORD)a7;
            StdMarshaler = 0;
            goto LABEL_9;
          }
          *v7 = -1;
        }
        StdMarshaler = -2147024362;
      }
    }
  }
LABEL_9:
  v17 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)StdMarshaler;
}
