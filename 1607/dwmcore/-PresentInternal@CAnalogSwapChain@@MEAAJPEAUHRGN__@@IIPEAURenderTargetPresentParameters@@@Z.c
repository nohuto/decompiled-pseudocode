/*
 * XREFs of ?PresentInternal@CAnalogSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180168500
 * Callers:
 *     <none>
 * Callees:
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18009BAEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnalogSwapChain::PresentInternal(CAnalogSwapChain *this, HRGN a2, unsigned int a3, unsigned int a4)
{
  unsigned int *v8; // r8
  DWORD nCount; // [rsp+30h] [rbp-28h] BYREF
  char *Buffer; // [rsp+38h] [rbp-20h]
  struct _RGNDATA *v12; // [rsp+60h] [rbp+8h] BYREF

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
