/*
 * XREFs of ?ProcessSetHandoff@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETHANDOFF@@@Z @ 0x18001C140
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CAnimation::ProcessSetHandoff(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_SETHANDOFF *a3)
{
  __int64 v6; // rdx
  __int64 Resource; // rax
  bool v8; // al

  *((_DWORD *)this + 50) = *((_DWORD *)a3 + 2);
  *((_QWORD *)this + 26) = *(_QWORD *)((char *)a3 + 12);
  v6 = *((unsigned int *)a3 + 5);
  if ( (_DWORD)v6 )
  {
    Resource = CResourceTable::GetResource(a2, v6, 83LL);
    *((_QWORD *)this + 27) = Resource;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
    v8 = *((_DWORD *)a3 + 7) != 0;
    *((_BYTE *)this + 96) &= ~0x20u;
    *((_BYTE *)this + 96) |= 32 * v8;
    *((_QWORD *)this + 29) = *((_QWORD *)a3 + 4);
    *((_QWORD *)this + 30) = *((_QWORD *)a3 + 5);
  }
  *((_DWORD *)this + 56) = *((_DWORD *)a3 + 6);
  return 0LL;
}
