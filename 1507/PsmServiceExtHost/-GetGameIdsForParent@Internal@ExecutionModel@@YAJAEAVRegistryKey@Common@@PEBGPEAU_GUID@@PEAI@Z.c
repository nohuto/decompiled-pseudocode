/*
 * XREFs of ?GetGameIdsForParent@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAU_GUID@@PEAI@Z @ 0x180002AF8
 * Callers:
 *     ?GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z @ 0x180002B90 (-GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z.c)
 *     ?GetGameIdsByExeName@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@PEAI@Z @ 0x180044200 (-GetGameIdsByExeName@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@PEAI@Z.c)
 * Callees:
 *     ?GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z @ 0x180007ADC (-GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18001B890 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ?Decode@Guid@Common@@SAJPEBGKPEAU_GUID@@@Z @ 0x18004D88C (-Decode@Guid@Common@@SAJPEBGKPEAU_GUID@@@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::GetGameIdsForParent(
        ExecutionModel::Internal *this,
        struct Common::RegistryKey *a2,
        const unsigned __int16 *a3,
        struct _GUID *a4)
{
  int v4; // esi
  void *v6; // rbx
  unsigned int v8; // ebp
  int ParentsChildrenStrings; // eax
  int v10; // edi
  const unsigned __int16 *v12; // r13
  const unsigned __int16 *i; // rcx
  unsigned int *v14; // r15
  unsigned int v15[2]; // [rsp+20h] [rbp-38h] BYREF
  void *Block; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  *(_QWORD *)v15 = 0LL;
  v6 = 0LL;
  Block = 0LL;
  v8 = 0;
  if ( !a2 || !a4 )
  {
    v4 = -2147024809;
    goto LABEL_5;
  }
  ParentsChildrenStrings = ExecutionModel::Internal::GetParentsChildrenStrings(
                             this,
                             a2,
                             (const unsigned __int16 *)&Block,
                             0LL,
                             *(unsigned int **)v15);
  v6 = Block;
  v10 = ParentsChildrenStrings;
  if ( ParentsChildrenStrings == -2147024894 )
  {
    a4->Data1 = 0;
LABEL_5:
    v10 = v4;
    goto LABEL_6;
  }
  if ( ParentsChildrenStrings >= 0 )
  {
    v12 = (const unsigned __int16 *)Block;
    for ( i = (const unsigned __int16 *)Block; ; i = v12 )
    {
      v10 = StringCchLengthW(i, 0x7FFFFFFFuLL, (unsigned __int64 *)v15);
      if ( v10 < 0 )
        break;
      v14 = *(unsigned int **)v15;
      if ( !*(_QWORD *)v15 )
      {
        if ( a3 && a4->Data1 < v8 )
          v10 = -2147024662;
        a4->Data1 = v8;
        break;
      }
      if ( a3 )
      {
        if ( v8 < a4->Data1 )
        {
          v10 = Common::Guid::Decode(v12, v15[0], (struct _GUID *)&a3[8 * v8]);
          if ( v10 < 0 )
            break;
        }
      }
      ++v8;
      v12 += (_QWORD)v14 + 1;
    }
  }
LABEL_6:
  operator delete(v6);
  return (unsigned int)v10;
}
