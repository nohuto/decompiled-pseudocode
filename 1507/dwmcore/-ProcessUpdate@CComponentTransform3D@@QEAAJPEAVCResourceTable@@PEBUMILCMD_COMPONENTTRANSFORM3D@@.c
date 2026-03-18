/*
 * XREFs of ?ProcessUpdate@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D@@@Z @ 0x180117F9C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CComponentTransform3D::ProcessUpdate(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM3D *a3)
{
  __int128 v3; // xmm0
  char *v4; // r8
  _BYTE v6[184]; // [rsp+20h] [rbp-69h]

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
  *(_QWORD *)&v6[176] = *((_QWORD *)v4 + 6);
  *((_OWORD *)this + 7) = *(_OWORD *)&v6[8];
  *((_OWORD *)this + 8) = *(_OWORD *)&v6[24];
  *((_OWORD *)this + 9) = *(_OWORD *)&v6[40];
  *((_OWORD *)this + 10) = *(_OWORD *)&v6[56];
  *((_OWORD *)this + 11) = *(_OWORD *)&v6[72];
  *((_OWORD *)this + 12) = *(_OWORD *)&v6[88];
  *((_OWORD *)this + 13) = *(_OWORD *)&v6[104];
  *((_OWORD *)this + 14) = *(_OWORD *)&v6[120];
  *((_OWORD *)this + 15) = *(_OWORD *)&v6[136];
  *((_OWORD *)this + 16) = *(_OWORD *)&v6[152];
  *((_OWORD *)this + 17) = *(_OWORD *)&v6[168];
  CResource::NotifyOnChanged((_DWORD *)this + 2, 0, 0LL);
  return 0LL;
}
