/*
 * XREFs of ?StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C00036E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxRequestContext::StoreAndReferenceMemory(FxRequestContext *this, FxRequestBuffer *Buffer)
{
  __int64 v4; // r8

  if ( Buffer->DataType == FxRequestBufferMemory )
  {
    v4 = 130LL;
  }
  else
  {
    if ( Buffer->DataType != FxRequestBufferReferencedMdl )
    {
      this->m_RequestMemory = 0LL;
      return;
    }
    v4 = 135LL;
  }
  Buffer->u.Memory.Memory->AddRef(
    Buffer->u.Memory.Memory,
    this,
    v4,
    "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
  this->m_RequestMemory = Buffer->u.Memory.Memory;
}
