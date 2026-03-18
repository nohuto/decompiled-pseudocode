/*
 * XREFs of ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0023A5C
 * Callers:
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C0023840 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0031564 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C0033238 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     VfAddContextToHandle @ 0x1C00B7A44 (VfAddContextToHandle.c)
 * Callees:
 *     memset @ 0x1C0036C40 (memset.c)
 */

void __fastcall FxContextHeaderInit(FxContextHeader *Header, FxObject *Object, _WDF_OBJECT_ATTRIBUTES *Attributes)
{
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8

  memset(Header, 0, 0x30uLL);
  Header->Object = Object;
  if ( Attributes )
  {
    ContextTypeInfo = Attributes->ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      ContextSizeOverride = Attributes->ContextSizeOverride;
      if ( !ContextSizeOverride )
        ContextSizeOverride = ContextTypeInfo->ContextSize;
      memset(Header->Context, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    Header->ContextTypeInfo = Attributes->ContextTypeInfo;
  }
}
