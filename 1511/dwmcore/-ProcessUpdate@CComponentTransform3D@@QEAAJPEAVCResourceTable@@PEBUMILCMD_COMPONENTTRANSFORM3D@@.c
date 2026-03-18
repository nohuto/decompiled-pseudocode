/*
 * XREFs of ?ProcessUpdate@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D@@@Z @ 0x1800F6B30
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CComponentTransform3D::ProcessUpdate(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM3D *a3)
{
  __int128 v3; // xmm0
  char *v4; // r8
  _BYTE v6[200]; // [rsp+20h] [rbp-79h]

  *(_OWORD *)v6 = *(_OWORD *)a3;
  *(_OWORD *)&v6[16] = *((_OWORD *)a3 + 1);
  *(_OWORD *)&v6[32] = *((_OWORD *)a3 + 2);
  *(_OWORD *)&v6[48] = *((_OWORD *)a3 + 3);
  *(_OWORD *)&v6[64] = *((_OWORD *)a3 + 4);
  *(_OWORD *)&v6[80] = *((_OWORD *)a3 + 5);
  *(_OWORD *)&v6[96] = *((_OWORD *)a3 + 6);
  v3 = *((_OWORD *)a3 + 7);
  v4 = (char *)a3 + 128;
  *(_OWORD *)&v6[112] = v3;
  *(_OWORD *)&v6[128] = *(_OWORD *)v4;
  *(_OWORD *)&v6[144] = *((_OWORD *)v4 + 1);
  *(_OWORD *)&v6[160] = *((_OWORD *)v4 + 2);
  *(_OWORD *)&v6[176] = *((_OWORD *)v4 + 3);
  *(_QWORD *)&v6[192] = *((_QWORD *)v4 + 8);
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)&v6[8];
  *(_OWORD *)((char *)this + 136) = *(_OWORD *)&v6[24];
  *(_OWORD *)((char *)this + 152) = *(_OWORD *)&v6[40];
  *(_OWORD *)((char *)this + 168) = *(_OWORD *)&v6[56];
  *(_OWORD *)((char *)this + 184) = *(_OWORD *)&v6[72];
  *(_OWORD *)((char *)this + 200) = *(_OWORD *)&v6[88];
  *(_OWORD *)((char *)this + 216) = *(_OWORD *)&v6[104];
  *(_OWORD *)((char *)this + 232) = *(_OWORD *)&v6[120];
  *(_OWORD *)((char *)this + 248) = *(_OWORD *)&v6[136];
  *(_OWORD *)((char *)this + 264) = *(_OWORD *)&v6[152];
  *(_OWORD *)((char *)this + 280) = *(_OWORD *)&v6[168];
  *(_OWORD *)((char *)this + 296) = *(_OWORD *)&v6[184];
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
