/*
 * XREFs of ??1CPrimitive@@UEAA@XZ @ 0x1800F8BCC
 * Callers:
 *     ??_GCPrimitive@@UEAAPEAXI@Z @ 0x1800F9460 (--_GCPrimitive@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResources@CPrimitive@@AEAAXXZ @ 0x1801178C8 (-ReleaseResources@CPrimitive@@AEAAXXZ.c)
 */

void __fastcall CPrimitive::~CPrimitive(CPrimitive *this)
{
  *(_QWORD *)this = &CPrimitive::`vftable'{for `CContent'};
  *((_QWORD *)this + 5) = &CPrimitive::`vftable'{for `IDeviceResourceNotify'};
  CPrimitive::ReleaseResources(this);
  CResource::~CResource(this);
}
