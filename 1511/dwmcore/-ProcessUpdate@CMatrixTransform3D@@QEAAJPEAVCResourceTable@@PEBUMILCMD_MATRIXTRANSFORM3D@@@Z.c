/*
 * XREFs of ?ProcessUpdate@CMatrixTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM3D@@@Z @ 0x1800684BC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CMatrixTransform3D::ProcessUpdate(
        CMatrixTransform3D *this,
        struct CResourceTable *a2,
        const struct MILCMD_MATRIXTRANSFORM3D *a3)
{
  _BYTE v4[72]; // [rsp+20h] [rbp-58h]

  *(_OWORD *)v4 = *(_OWORD *)a3;
  *(_OWORD *)&v4[16] = *((_OWORD *)a3 + 1);
  *(_OWORD *)&v4[32] = *((_OWORD *)a3 + 2);
  *(_QWORD *)&v4[64] = *((_QWORD *)a3 + 8);
  *(_OWORD *)&v4[48] = *((_OWORD *)a3 + 3);
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)&v4[8];
  *(_OWORD *)((char *)this + 136) = *(_OWORD *)&v4[24];
  *(_OWORD *)((char *)this + 152) = *(_OWORD *)&v4[40];
  *(_OWORD *)((char *)this + 168) = *(_OWORD *)&v4[56];
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
