/*
 * XREFs of ?AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x18000FFB0
 * Callers:
 *     ?AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000FDD8 (-AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000FEB8 (-AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x1800355D4 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x180010074 (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 *     ?IsApplied@ResourceSet@ExecutionModel@@UEBA_NXZ @ 0x180010740 (-IsApplied@ResourceSet@ExecutionModel@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x180037EC8 (-ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@.c)
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
  const GUID *v8; // r8
  const GUID *v9; // r9
  int HasMemoryForFGSharing; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-31h] BYREF
  ExecutionModel::ResourceManager **v13; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  int *p_HasMemoryForFGSharing; // [rsp+70h] [rbp+7h]
  int v16; // [rsp+78h] [rbp+Fh]
  int v17; // [rsp+7Ch] [rbp+13h]
  ExecutionModel::ResourceManager ***v18; // [rsp+80h] [rbp+17h]
  int v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+8Ch] [rbp+23h]
  unsigned __int64 *v21; // [rsp+90h] [rbp+27h]
  int v22; // [rsp+98h] [rbp+2Fh]
  int v23; // [rsp+9Ch] [rbp+33h]

  v12 = a2;
  HasMemoryForFGSharing = ExecutionModel::ResourceSet::HasMemoryForFGSharing((ExecutionModel::ResourceSet *)this, a2);
  v4 = HasMemoryForFGSharing;
  if ( HasMemoryForFGSharing >= 0 )
  {
    v5 = this[171];
    this[230] = (ExecutionModel::ResourceManager *)((char *)this[230] + v12);
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
        this[230] = (ExecutionModel::ResourceManager *)((char *)this[230] - v12);
    }
  }
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v3, 1uLL) )
  {
    v17 = 0;
    v20 = 0;
    v23 = 0;
    p_HasMemoryForFGSharing = &HasMemoryForFGSharing;
    v18 = &v13;
    v21 = &v12;
    v16 = 4;
    v13 = this;
    v19 = 8;
    v22 = 8;
    TlgWrite((TraceLoggingHProvider)8, &unk_18005CA11, v8, v9, 5u, &pData);
    return (unsigned int)HasMemoryForFGSharing;
  }
  return v4;
}
