/*
 * XREFs of ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAVCSystemAudioDeviceBase@@@Z @ 0x140011624
 * Callers:
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140010F40 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x140018A40 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     _recalloc @ 0x140019090 (_recalloc.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x14002A718 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
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
  __int64 v9; // r15
  _QWORD *v10; // rsi
  char *v11; // rdi
  struct ATL::IAtlStringMgr *(__fastcall *v12)(ATL::CAtlStringMgr *__hidden); // rbp
  struct ATL::IAtlStringMgr *v13; // rax
  char *v14; // rbx
  char *v15; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  rsize_t v20; // rdx

  v5 = _recalloc(qword_140055BF0, dword_140055C00 + 1, 8uLL);
  if ( !v5 )
    return 0LL;
  qword_140055BF0 = v5;
  v6 = (char *)_recalloc(qword_140055BF8, dword_140055C00 + 1, 8uLL);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  qword_140055BF8 = v6;
  v8 = dword_140055C00;
  v9 = dword_140055C00;
  v10 = (char *)qword_140055BF0 + 8 * dword_140055C00;
  if ( v10 )
  {
    v11 = (char *)*a2;
    v12 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(**((_QWORD **)v11 - 3) + 32LL);
    if ( v12 == ATL::CAtlStringMgr::Clone )
      v13 = ATL::CAtlStringMgr::Clone(*((ATL::CAtlStringMgr **)v11 - 3));
    else
      v13 = (struct ATL::IAtlStringMgr *)((__int64 (__fastcall *)(_QWORD, char *))v12)(*((_QWORD *)v11 - 3), v6);
    if ( *((int *)v11 - 2) >= 0 && v13 == *((struct ATL::IAtlStringMgr **)v11 - 3) )
    {
      v14 = v11 - 24;
      _InterlockedIncrement((volatile signed __int32 *)v11 - 2);
    }
    else
    {
      v17 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v13)(
              v13,
              *((unsigned int *)v11 - 4),
              2LL);
      v14 = (char *)v17;
      if ( !v17 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v19, v18);
      *(_DWORD *)(v17 + 8) = *((_DWORD *)v11 - 4);
      v20 = 2LL * (*((_DWORD *)v11 - 4) + 1);
      memcpy_s((void *const)(v17 + 24), v20, v11, v20);
    }
    *v10 = v14 + 24;
    v8 = dword_140055C00;
    v7 = (char *)qword_140055BF8;
  }
  v15 = &v7[8 * v9];
  if ( v15 )
  {
    *(_QWORD *)v15 = *a3;
    v8 = dword_140055C00;
  }
  dword_140055C00 = v8 + 1;
  return 1LL;
}
