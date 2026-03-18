/*
 * XREFs of ?SetMdl@FxRequestMemory@@QEAAXPEAVFxRequest@@PEAU_MDL@@PEAX_KE@Z @ 0x1C007B45C
 * Callers:
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C0077C40 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C0077EBC (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 * Callees:
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1C00784FC (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 */

void __fastcall FxRequestMemory::SetMdl(
        FxRequestMemory *this,
        FxRequest *Request,
        _MDL *Mdl,
        void *MdlBuffer,
        unsigned __int64 BufferSize,
        unsigned __int8 ReadOnly)
{
  this->m_BufferSize = BufferSize;
  this->m_Mdl = Mdl;
  this->m_pBuffer = MdlBuffer;
  this->m_Request = Request;
  FxRequest::AddIrpReference(Request, (__int64)Request, (unsigned __int8)Mdl);
  if ( ReadOnly )
    this->m_Flags = 1;
}
