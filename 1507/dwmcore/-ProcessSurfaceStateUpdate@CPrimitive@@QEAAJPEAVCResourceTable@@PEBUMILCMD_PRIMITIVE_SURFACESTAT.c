/*
 * XREFs of ?ProcessSurfaceStateUpdate@CPrimitive@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVE_SURFACESTATEUPDATE@@@Z @ 0x180117764
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CPrimitive::ProcessSurfaceStateUpdate(
        CPrimitive *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVE_SURFACESTATEUPDATE *a3)
{
  struct CResource *Resource; // rax
  struct CResource *v6; // rdi
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm1_4

  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 4), 79LL);
  v6 = Resource;
  if ( Resource != *((struct CResource **)this + 7) )
  {
    *((_DWORD *)this + 12) = Resource != 0LL ? 2 : 0;
    CResource::RegisterNotifier(this, Resource);
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 7));
    *((_QWORD *)this + 7) = v6;
  }
  *(_OWORD *)((char *)this + 72) = *(_OWORD *)((char *)a3 + 20);
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 45) = *((_DWORD *)a3 + 25);
  *((_DWORD *)this + 46) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 37) = 1065353216;
  *((_DWORD *)this + 32) = 1065353216;
  *((_DWORD *)this + 27) = 1065353216;
  *((_DWORD *)this + 22) = 1065353216;
  *(_QWORD *)((char *)this + 140) = 0LL;
  *(_QWORD *)((char *)this + 132) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *(_QWORD *)((char *)this + 92) = 0LL;
  v7 = *(double *)((char *)a3 + 52);
  *((float *)this + 22) = v7;
  v8 = *(double *)((char *)a3 + 60);
  *((float *)this + 23) = v8;
  v9 = *(double *)((char *)a3 + 68);
  *((float *)this + 26) = v9;
  v10 = *(double *)((char *)a3 + 76);
  *((float *)this + 27) = v10;
  *((float *)this + 34) = *(double *)((char *)a3 + 84);
  v11 = *(double *)((char *)a3 + 92);
  *((_QWORD *)this + 8) = 0LL;
  *((float *)this + 35) = v11;
  CResource::NotifyOnChanged(this, 5u, 0LL);
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
