/*
 * XREFs of ?StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C0004F90
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

void __fastcall FxRequestContext::StoreAndReferenceMemory(FxRequestContext *this, FxRequestBuffer *Buffer)
{
  IFxMemory *Memory; // rcx
  unsigned int (__fastcall *AddRef)(IFxMemory *, void *, int, const char *); // rax
  unsigned int RefCount; // edx
  FxTagTracker *v7; // rcx

  if ( Buffer->DataType == FxRequestBufferMemory )
  {
    Memory = Buffer->u.Memory.Memory;
    AddRef = Memory->AddRef;
    if ( (char *)AddRef == (char *)FxMemoryObject::AddRef )
    {
      RefCount = _InterlockedIncrement((volatile signed __int32 *)&Memory[-12].__vftable + 1);
      if ( SLOBYTE(Memory[-10].__vftable) < 0 )
      {
        v7 = (FxTagTracker *)Memory[-19].__vftable;
        if ( v7 )
          FxTagTracker::UpdateTagHistory(
            v7,
            this,
            130,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp",
            TagAddRef,
            RefCount);
      }
    }
    else
    {
      AddRef(Memory, this, 130, "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    }
  }
  else
  {
    if ( Buffer->DataType != FxRequestBufferReferencedMdl )
    {
      this->m_RequestMemory = 0LL;
      return;
    }
    Buffer->u.Memory.Memory->AddRef(
      Buffer->u.Memory.Memory,
      this,
      135,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
  }
  this->m_RequestMemory = Buffer->u.Memory.Memory;
}
