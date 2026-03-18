/*
 * XREFs of ?PresentInternal@CAnalogSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180128770
 * Callers:
 *     <none>
 * Callees:
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180087A10 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CAnalogSwapChain::PresentInternal(CAnalogSwapChain *this, HRGN a2, unsigned int a3, unsigned int a4)
{
  unsigned int *v8; // r8
  DWORD nCount; // [rsp+20h] [rbp-28h] BYREF
  char *Buffer; // [rsp+28h] [rbp-20h]
  struct _RGNDATA *v12; // [rsp+50h] [rbp+8h] BYREF

  memset_0(&nCount, 0, 0x20uLL);
  v12 = 0LL;
  if ( a2 )
  {
    HrgnToRgnData(a2, &v12, v8);
    if ( v12 )
    {
      if ( v12->rdh.nCount )
      {
        nCount = v12->rdh.nCount;
        Buffer = v12->Buffer;
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DWORD *))(**((_QWORD **)this + 36) + 48LL))(
           *((_QWORD *)this + 36),
           a3,
           a4,
           &nCount);
}
