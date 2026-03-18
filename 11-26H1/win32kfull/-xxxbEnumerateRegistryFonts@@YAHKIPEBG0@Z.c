/*
 * XREFs of ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1400CC45C
 * Callers:
 *     xxxLW_LoadFonts @ 0x1400CC240 (xxxLW_LoadFonts.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x14025B96C (-xxxLoadPermanentFonts@@YAHXZ.c)
 * Callees:
 *     ExchangeW32ThreadLock @ 0x140004EB8 (ExchangeW32ThreadLock.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x140006DC8 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFonts(
        __int64 a1,
        unsigned int a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  unsigned int *v4; // r15
  ULONG v6; // r12d
  __int64 v7; // rax
  void *v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rcx
  unsigned int *v11; // rsi
  struct tagTHREADINFO *v12; // rax
  ULONG v13; // r14d
  NTSTATUS v14; // eax
  __int64 v16; // rax
  __int128 v17; // [rsp+30h] [rbp-49h] BYREF
  __int128 v18; // [rsp+40h] [rbp-39h] BYREF
  __int64 v19; // [rsp+50h] [rbp-29h]
  _QWORD v20[2]; // [rsp+58h] [rbp-21h] BYREF
  void (*v21)(void *); // [rsp+68h] [rbp-11h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+E8h] [rbp+6Fh] BYREF
  void *KeyHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  LOWORD(v4) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  v19 = -1LL;
  v21 = 0LL;
  v6 = 544;
  v7 = 0LL;
  v17 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v18 = 0LL;
  if ( a2 == 56 )
  {
    v7 = CreateProfileUserName(&v18);
    if ( !v7 )
    {
      if ( v19 != -1 )
        PopAndFreeAlwaysW32ThreadLock(&v18);
      return 0LL;
    }
  }
  v8 = (void *)OpenCacheKeyEx(v7, a2, 131097LL, 0LL);
  if ( v19 != -1 )
  {
    PopAndFreeAlwaysW32ThreadLock(&v18);
    v19 = -1LL;
  }
  if ( !v8 )
    return 0LL;
  v9 = xxxbEnumerateRegistryFontsInternal(v8);
  v11 = (unsigned int *)Win32AllocPoolZInit(544LL, 1919972181LL);
  if ( !v11 )
    return v9;
  v12 = PtiCurrent(v10);
  v13 = 0;
  v20[0] = *((_QWORD *)v12 + 47);
  *((_QWORD *)v12 + 47) = v20;
  v21 = Win32FreePool;
  v20[1] = v11;
  while ( 1 )
  {
    v14 = ZwEnumerateKey(v8, v13, KeyBasicInformation, v11, v6 - 2, &ResultLength);
    if ( v14 != -2147483643 && v14 != -1073741789 )
      break;
    ResultLength += 2;
    v16 = Win32AllocPoolZInit(ResultLength, 1919972181LL);
    v4 = (unsigned int *)v16;
    if ( v16 )
    {
      ExchangeW32ThreadLock(v16, (__int64)v20);
      v6 = ResultLength;
      v11 = v4;
      v14 = ZwEnumerateKey(v8, v13, KeyBasicInformation, v4, ResultLength - 2, &ResultLength);
      LOWORD(v4) = 0;
      if ( v14 != -2147483643 && v14 != -1073741789 )
        break;
    }
LABEL_14:
    ++v13;
  }
  if ( v14 >= 0 )
  {
    *((_WORD *)v11 + ((unsigned __int64)v11[3] >> 1) + 8) = (_WORD)v4;
    *((_QWORD *)&v17 + 1) = v11 + 4;
    LOWORD(v17) = *((_WORD *)v11 + 6);
    WORD1(v17) = v17;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v8;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v9 |= xxxbEnumerateRegistryFontsInternal(KeyHandle);
      ZwClose(KeyHandle);
    }
    goto LABEL_14;
  }
  ZwClose(v8);
  PopAndFreeW32ThreadLock((__int64)v20);
  return v9;
}
