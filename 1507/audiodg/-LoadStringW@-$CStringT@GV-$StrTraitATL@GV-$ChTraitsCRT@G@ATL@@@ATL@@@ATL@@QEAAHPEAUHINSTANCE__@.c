/*
 * XREFs of ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x14002A2CC
 * Callers:
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140010F40 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140011108 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14001113C (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x140029F28 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ?_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@Z @ 0x14002A730 (-_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        const void **a1,
        HINSTANCE a2,
        unsigned int a3)
{
  HRSRC Resource; // rax
  const struct ATL::ATLSTRINGRESOURCEIMAGE *StringResourceImage; // rax
  const struct ATL::ATLSTRINGRESOURCEIMAGE *v8; // rbx
  __int64 v9; // rdi
  errno_t v10; // eax

  Resource = FindResourceExW(a2, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((a3 >> 4) + 1), 0);
  if ( !Resource )
    return 0LL;
  StringResourceImage = ATL::_AtlGetStringResourceImage(a2, Resource, a3);
  v8 = StringResourceImage;
  if ( !StringResourceImage )
    return 0LL;
  v9 = *(unsigned __int16 *)StringResourceImage;
  if ( (int)((*((_DWORD *)*a1 - 3) - v9) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v9);
  v10 = memcpy_s((void *const)*a1, 2 * v9, (char *)v8 + 2, 2LL * *(unsigned __int16 *)v8);
  ATL::AtlCrtErrorCheck(v10);
  ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)a1, v9);
  return 1LL;
}
