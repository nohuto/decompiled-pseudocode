/*
 * XREFs of ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAVCSystemAudioDeviceBase@@@Z @ 0x140016298
 * Callers:
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x1400161B0 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x1400172D0 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     _recalloc @ 0x1400184E0 (_recalloc.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x14002977C (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::Add(
        __int64 a1,
        const void **a2,
        _QWORD *a3)
{
  void *v5; // rax
  char *v6; // rax
  char *v7; // rdx
  int v8; // ecx
  __int64 v9; // rbp
  _QWORD *v10; // rsi
  volatile signed __int32 *v11; // rbx
  ATL::CAtlStringMgr *v12; // rcx
  struct ATL::IAtlStringMgr *(__fastcall *v13)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::IAtlStringMgr *v14; // rax
  char *v15; // rdi
  char *v16; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  rsize_t v21; // rdx

  v5 = _recalloc(Block, dword_140054CD0 + 1, 8uLL);
  if ( !v5 )
    return 0LL;
  Block = v5;
  v6 = (char *)_recalloc(qword_140054CC8, dword_140054CD0 + 1, 8uLL);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  qword_140054CC8 = v6;
  v8 = dword_140054CD0;
  v9 = dword_140054CD0;
  v10 = (char *)Block + 8 * dword_140054CD0;
  if ( v10 )
  {
    v11 = (volatile signed __int32 *)*a2;
    v12 = (ATL::CAtlStringMgr *)*((_QWORD *)v11 - 3);
    v13 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(*(_QWORD *)v12 + 32LL);
    if ( v13 == ATL::CAtlStringMgr::Clone )
      v14 = ATL::CAtlStringMgr::Clone(v12);
    else
      v14 = (struct ATL::IAtlStringMgr *)((__int64 (__fastcall *)(ATL::CAtlStringMgr *, struct ATL::IAtlStringMgr *(__fastcall *)(ATL::CAtlStringMgr *__hidden)))v13)(
                                           v12,
                                           ATL::CAtlStringMgr::Clone);
    if ( *((int *)v11 - 2) >= 0 && v14 == *((struct ATL::IAtlStringMgr **)v11 - 3) )
    {
      v15 = (char *)(v11 - 6);
      _InterlockedIncrement(v11 - 2);
    }
    else
    {
      v18 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v14)(
              v14,
              *((unsigned int *)v11 - 4),
              2LL);
      v15 = (char *)v18;
      if ( !v18 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v20, v19);
      *(_DWORD *)(v18 + 8) = *((_DWORD *)v11 - 4);
      v21 = 2LL * (*((_DWORD *)v11 - 4) + 1);
      memcpy_s((void *const)(v18 + 24), v21, (const void *const)v11, v21);
    }
    *v10 = v15 + 24;
    v8 = dword_140054CD0;
    v7 = (char *)qword_140054CC8;
  }
  v16 = &v7[8 * v9];
  if ( v16 )
  {
    *(_QWORD *)v16 = *a3;
    v8 = dword_140054CD0;
  }
  dword_140054CD0 = v8 + 1;
  return 1LL;
}
