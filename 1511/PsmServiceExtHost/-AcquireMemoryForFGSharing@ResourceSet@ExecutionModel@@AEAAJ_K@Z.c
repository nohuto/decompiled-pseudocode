/*
 * XREFs of ?AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x18000DC20
 * Callers:
 *     ?AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000D90C (-AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000D9EC (-AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18003C504 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 * Callees:
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z @ 0x18000DD38 (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z.c)
 *     ?IsApplied@ResourceSet@ExecutionModel@@UEBA_NXZ @ 0x18000E810 (-IsApplied@ResourceSet@ExecutionModel@@UEBA_NXZ.c)
 *     ?ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18000FAD4 (-ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::AcquireMemoryForFGSharing(
        ExecutionModel::ResourceManager **this,
        unsigned __int64 a2)
{
  const struct _TlgProvider_t *v3; // rcx
  unsigned int v4; // edi
  ExecutionModel::ResourceManager *v5; // rdx
  bool (__fastcall *v6)(ExecutionModel::ResourceSet *__hidden); // r14
  bool IsApplied; // al
  int v8; // edx
  const GUID *v9; // r8
  const GUID *v10; // r9
  int HasMemoryForFGSharing; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-31h] BYREF
  ExecutionModel::ResourceManager **v14; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  int *p_HasMemoryForFGSharing; // [rsp+70h] [rbp+7h]
  int v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+7Ch] [rbp+13h]
  ExecutionModel::ResourceManager ***v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+88h] [rbp+1Fh]
  int v21; // [rsp+8Ch] [rbp+23h]
  unsigned __int64 *v22; // [rsp+90h] [rbp+27h]
  int v23; // [rsp+98h] [rbp+2Fh]
  int v24; // [rsp+9Ch] [rbp+33h]

  v13 = a2;
  HasMemoryForFGSharing = ExecutionModel::ResourceSet::HasMemoryForFGSharing((ExecutionModel::ResourceSet *)this, a2, 0);
  v4 = HasMemoryForFGSharing;
  if ( HasMemoryForFGSharing >= 0 )
  {
    v5 = this[171];
    this[231] = (ExecutionModel::ResourceManager *)((char *)this[231] + v13);
    v6 = (bool (__fastcall *)(ExecutionModel::ResourceSet *__hidden))*((_QWORD *)v5 + 11);
    if ( v6 == ExecutionModel::ResourceSet::IsApplied )
    {
      IsApplied = ExecutionModel::ResourceSet::IsApplied((ExecutionModel::ResourceSet *)(this + 171));
    }
    else
    {
      IsApplied = v6((ExecutionModel::ResourceSet *)(this + 171));
      v4 = HasMemoryForFGSharing;
    }
    if ( IsApplied )
    {
      HasMemoryForFGSharing = ExecutionModel::ResourceManager::ResourceSetMemoryLimitChangedNotification(
                                this[3],
                                (struct ExecutionModel::ResourceSet *)this);
      v4 = HasMemoryForFGSharing;
      if ( HasMemoryForFGSharing < 0 )
        this[231] = (ExecutionModel::ResourceManager *)((char *)this[231] - v13);
    }
  }
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v3, 1uLL) )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    p_HasMemoryForFGSharing = &HasMemoryForFGSharing;
    v19 = &v14;
    v22 = &v13;
    v17 = 4;
    v14 = this;
    v20 = v8 + 7;
    v23 = v8 + 7;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v8 + 7), &unk_18006485F, v9, v10, 5u, &pData);
    return (unsigned int)HasMemoryForFGSharing;
  }
  return v4;
}
