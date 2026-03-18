/*
 * XREFs of ?IsPointerNodeInContact@PointerList@@YAHG@Z @ 0x1C01FC580
 * Callers:
 *     ?ReassessContactDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KPEAUtagPOINTER_INFO@@H@Z @ 0x1C01C5CD0 (-ReassessContactDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KPEAUtagPOINTER_INFO@@H@Z.c)
 *     IsPointerNodeInContact @ 0x1C01FCEC0 (IsPointerNodeInContact.c)
 * Callees:
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01FC1E4 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

__int64 __fastcall PointerList::IsPointerNodeInContact(PointerList *this)
{
  struct tagINPUTPOINTERNODE *NodeById; // rax
  unsigned int v2; // r8d

  NodeById = FindNodeById((unsigned __int16)this, 1, 1);
  if ( NodeById && *((_DWORD *)NodeById + 9) == 2 )
    return v2;
  else
    return 0LL;
}
