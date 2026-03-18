/*
 * XREFs of ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x18004CF6C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18004C6FC (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x18004CC70 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 *     Template_qxqq @ 0x180144F94 (Template_qxqq.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddPrimitives(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_ADDPRIMITIVES *a3)
{
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // ecx
  CBitmapOfDeviceBitmaps *Resource; // rbp
  CMILCOMBase *v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v6 = 0;
  Resource = (CBitmapOfDeviceBitmaps *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x5Fu);
  if ( !Resource )
  {
    v12 = 152;
LABEL_11:
    v6 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v12);
    return v6;
  }
  if ( *((_DWORD *)a3 + 3) < 0x3Cu )
  {
    v12 = 157;
    goto LABEL_11;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    Template_qxqq(v8, v7, *((_DWORD *)a2 + 12), (_DWORD)this, *((_DWORD *)a3 + 1), *((_DWORD *)a3 + 2));
  v10 = (CMILCOMBase *)*((_QWORD *)this + 44);
  if ( v10 )
    CMILCOMBase::InternalRelease(v10);
  *((_QWORD *)this + 44) = Resource;
  CBitmapOfDeviceBitmaps::AddRef(Resource);
  *((_DWORD *)this + 90) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 91) = *((_DWORD *)a3 + 4);
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
  CPrimitiveGroup::ResolveSharedMemoryBuffer(this);
  return v6;
}
