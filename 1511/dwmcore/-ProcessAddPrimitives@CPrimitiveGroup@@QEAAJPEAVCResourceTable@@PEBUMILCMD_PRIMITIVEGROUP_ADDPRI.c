/*
 * XREFs of ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x1800911E0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800924F4 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x180092AAC (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     Template_qxqq @ 0x18012796C (Template_qxqq.c)
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
  Resource = (CBitmapOfDeviceBitmaps *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 90LL);
  if ( !Resource )
  {
    v12 = 126;
LABEL_11:
    v6 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v12);
    return v6;
  }
  if ( *((_DWORD *)a3 + 3) < 0x3Cu )
  {
    v12 = 131;
    goto LABEL_11;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    Template_qxqq(v8, v7, *((_DWORD *)a2 + 12), (_DWORD)this, *((_DWORD *)a3 + 1), *((_DWORD *)a3 + 2));
  v10 = (CMILCOMBase *)*((_QWORD *)this + 34);
  if ( v10 )
    CMILCOMBase::InternalRelease(v10);
  *((_QWORD *)this + 34) = Resource;
  CBitmapOfDeviceBitmaps::AddRef(Resource);
  *((_DWORD *)this + 70) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 71) = *((_DWORD *)a3 + 4);
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
  CPrimitiveGroup::ResolveSharedMemoryBuffer(this);
  return v6;
}
