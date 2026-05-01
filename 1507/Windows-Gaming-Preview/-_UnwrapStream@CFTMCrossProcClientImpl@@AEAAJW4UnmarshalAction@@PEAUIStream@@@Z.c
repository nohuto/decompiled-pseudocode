/*
 * XREFs of ?_UnwrapStream@CFTMCrossProcClientImpl@@AEAAJW4UnmarshalAction@@PEAUIStream@@@Z @ 0x18001FDB4
 * Callers:
 *     ?UnmarshalInterface@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x18001FBD0 (-UnmarshalInterface@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ReleaseMarshalData@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@@Z @ 0x18001FC40 (-ReleaseMarshalData@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@@Z.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000AA3C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV-$C.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x18001F194 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     memset @ 0x1800269AC (memset.c)
 *     CoTaskMemFree_0 @ 0x180026A50 (CoTaskMemFree_0.c)
 *     CoTaskMemAlloc_0 @ 0x180026A5C (CoTaskMemAlloc_0.c)
 *     RoGetAgileReference_0 @ 0x180026A74 (RoGetAgileReference_0.c)
 *     CoReleaseMarshalData_0 @ 0x180026A80 (CoReleaseMarshalData_0.c)
 */

__int64 __fastcall CFTMCrossProcClientImpl::_UnwrapStream(ULONG *a1, unsigned int a2, IStream *a3)
{
  __int64 *v6; // rax
  signed int AgileReference_0; // edi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rsi
  ULONG *v11; // rsi
  void *v12; // rbx
  void *v13; // rax
  size_t v14; // rax
  IStream *v15; // rax
  __int64 v16; // rsi
  IStream *v17; // r15
  __int64 v19; // [rsp+20h] [rbp-10h] BYREF
  __int64 v20; // [rsp+78h] [rbp+48h] BYREF

  if ( a2 )
  {
    AgileReference_0 = CoReleaseMarshalData_0(a3);
    goto LABEL_14;
  }
  v20 = 0LL;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IVisualElementEventDispatcher>>(&v20);
  AgileReference_0 = CoUnmarshalInterface(a3, &GUID_00000000_0000_0000_c000_000000000046, (LPVOID *)v6);
  if ( AgileReference_0 < 0 )
    goto LABEL_11;
  v8 = *((_QWORD *)a1 + 7);
  if ( v8 )
  {
    *((_QWORD *)a1 + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  AgileReference_0 = 0;
  if ( v20 )
  {
    v19 = 0LL;
    AgileReference_0 = RoGetAgileReference_0(0LL, &GUID_00000000_0000_0000_c000_000000000046, v20, &v19);
    if ( AgileReference_0 < 0 )
    {
      v9 = v19;
    }
    else
    {
      v9 = *((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 7) = v19;
    }
    if ( v9 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
LABEL_11:
    v10 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
LABEL_14:
  if ( AgileReference_0 >= 0 )
  {
    v11 = a1 + 6;
    AgileReference_0 = IStream_Read(a3, a1 + 6, 4u);
    if ( AgileReference_0 >= 0 )
    {
      v12 = 0LL;
      if ( is_mul_ok(*v11, 1uLL) )
      {
        v13 = CoTaskMemAlloc_0(*v11);
        v12 = v13;
        if ( v13 )
        {
          v14 = CTCoAllocPolicy::_CoTaskMemSize(v13);
          memset(v12, 0, v14);
          AgileReference_0 = 0;
          if ( *v11 )
            AgileReference_0 = IStream_Read(a3, v12, *v11);
          if ( AgileReference_0 >= 0 )
          {
            v15 = SHCreateMemStream((const BYTE *)v12, *v11);
            v16 = *((_QWORD *)a1 + 8);
            v17 = v15;
            if ( v16 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 16LL))(*((_QWORD *)a1 + 8));
            *((_QWORD *)a1 + 8) = v17;
            AgileReference_0 = v17 == 0LL ? 0x8007000E : 0;
            if ( v17 )
              AgileReference_0 = (*(__int64 (__fastcall **)(ULONG *, _QWORD, IStream *))(*(_QWORD *)a1 + 96LL))(
                                   a1,
                                   a2,
                                   v17);
          }
        }
        else
        {
          AgileReference_0 = -2147024882;
        }
      }
      else
      {
        AgileReference_0 = -2147024362;
      }
      CoTaskMemFree_0(v12);
    }
  }
  return (unsigned int)AgileReference_0;
}
