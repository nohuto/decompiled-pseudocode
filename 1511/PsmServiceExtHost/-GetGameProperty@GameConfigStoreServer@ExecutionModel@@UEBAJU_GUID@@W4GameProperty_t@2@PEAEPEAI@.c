/*
 * XREFs of ?GetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@Z @ 0x180049430
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z @ 0x180027A48 (-OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z.c)
 *     ?GetValue@RegistryKey@Common@@QEAAJPEBGPEAXPEAK2@Z @ 0x180027B3C (-GetValue@RegistryKey@Common@@QEAAJPEBGPEAXPEAK2@Z.c)
 *     ??1StringBuffer@Common@@QEAA@XZ @ 0x18002807C (--1StringBuffer@Common@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18002B588 (__report_rangecheckfailure.c)
 *     memcpy_0 @ 0x18002BC72 (memcpy_0.c)
 *     ?DecryptString@Internal@ExecutionModel@@YAJPEBEKAEAVStringBuffer@Common@@@Z @ 0x180048B28 (-DecryptString@Internal@ExecutionModel@@YAJPEBEKAEAVStringBuffer@Common@@@Z.c)
 *     ?GetValue@RegistryKey@Common@@QEAAJPEBG_KAEAVByteBuffer@2@PEAK@Z @ 0x180049E80 (-GetValue@RegistryKey@Common@@QEAAJPEBG_KAEAVByteBuffer@2@PEAK@Z.c)
 *     ?Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z @ 0x180054628 (-Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::GetGameProperty(
        __int64 a1,
        const struct _GUID *a2,
        int a3,
        BYTE *a4,
        unsigned int *a5)
{
  __int64 v5; // rax
  int v6; // ebx
  bool v7; // zf
  __int64 v9; // r12
  int Value; // edi
  HKEY v12; // rcx
  bool v13; // cc
  unsigned __int64 v15; // r8
  int v16; // eax
  struct Common::StringBuffer *v17; // r9
  void *v18; // rcx
  void *v19; // rsi
  size_t v20; // r8
  unsigned __int64 v21; // r13
  int v22; // eax
  unsigned int *v23; // [rsp+20h] [rbp-A1h]
  HKEY hKey; // [rsp+30h] [rbp-91h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-89h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-81h] BYREF
  void *Src; // [rsp+48h] [rbp-79h]
  int v28; // [rsp+50h] [rbp-71h]
  unsigned int v29; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int8 *v30; // [rsp+60h] [rbp-61h] BYREF
  void *Block; // [rsp+68h] [rbp-59h]
  int v32; // [rsp+70h] [rbp-51h]
  unsigned __int16 v33[40]; // [rsp+80h] [rbp-41h] BYREF

  v5 = *(_QWORD *)&a2->Data1;
  v6 = 0;
  v7 = *(_QWORD *)&a2->Data1 == 0LL;
  v9 = a3;
  hKey = 0LL;
  v25 = 36;
  if ( v7 )
    v5 = *(_QWORD *)a2->Data4;
  if ( !v5 || !a5 || a3 < 0 || (unsigned __int64)a3 >= 0xF )
    return 2147942487LL;
  Value = Common::Guid::Encode(a2, v33, 0x24u, &v25);
  if ( Value < 0 )
    goto LABEL_8;
  if ( 2 * (unsigned __int64)v25 >= 0x4A )
    _report_rangecheckfailure();
  v33[v25] = 0;
  Value = Common::RegistryKey::OpenSubKey((HKEY *)(a1 + 8), v33, 0x20019u, &hKey);
  if ( Value < 0 )
    goto LABEL_8;
  if ( !*((_BYTE *)&off_180065F80 + 24 * v9 + 13) )
  {
    v21 = (int)*a5;
    Value = Common::RegistryKey::GetValue(&hKey, (&off_180065F80)[3 * v9], a4, a5, &v29);
    if ( Value >= 0 )
    {
      if ( v29 != *((_DWORD *)&off_180065F80 + 6 * v9 + 2) )
        goto LABEL_17;
      if ( a4 && *((_BYTE *)&off_180065F80 + 24 * v9 + 14) )
      {
        if ( v21 < 4 || v29 != 4 )
          goto LABEL_17;
        v22 = *(_DWORD *)a4;
        LOBYTE(v6) = _bittest(&v22, (unsigned int)(&off_180065F80)[3 * v9 + 1]);
        if ( (_DWORD)v9 == 9 )
          v6 = 1;
        *(_DWORD *)a4 = v6;
      }
    }
    goto LABEL_36;
  }
  v7 = *((_DWORD *)&off_180065F80 + 6 * v9 + 2) == 3;
  Block = 0LL;
  LODWORD(v30) = 0;
  v32 = 0;
  Src = 0LL;
  v26 = 0;
  v28 = 0;
  if ( !v7 )
  {
    Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v26);
    operator delete(0LL);
LABEL_17:
    if ( (unsigned __int64)hKey - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      RegCloseKey(hKey);
    return 2147549183LL;
  }
  v16 = Common::RegistryKey::GetValue(
          (Common::RegistryKey *)&hKey,
          (&off_180065F80)[3 * v9],
          v15,
          (struct Common::ByteBuffer *)&v30,
          v23);
  Value = 0;
  if ( v16 < 0 )
    Value = v16;
  if ( Value < 0 )
  {
    Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v26);
    v18 = Block;
LABEL_24:
    operator delete(v18);
LABEL_8:
    v12 = hKey;
    v13 = (unsigned __int64)hKey - 1 <= 0xFFFFFFFFFFFFFFFDuLL;
LABEL_9:
    if ( v13 )
      RegCloseKey(v12);
    return (unsigned int)Value;
  }
  v19 = Block;
  Value = ExecutionModel::Internal::DecryptString(
            (BYTE *)Block,
            (const unsigned __int8 *)(unsigned int)v30,
            (Common::StringBuffer *)&v26,
            v17);
  if ( Value < 0 )
  {
    Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v26);
    v18 = v19;
    goto LABEL_24;
  }
  if ( !a4 )
  {
    *a5 = 2 * v26 + 2;
    goto LABEL_34;
  }
  v20 = *a5;
  if ( v20 >= 2 * (unsigned __int64)(v26 + 1) )
  {
    memcpy_0(a4, Src, v20);
LABEL_34:
    Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v26);
    operator delete(v19);
LABEL_36:
    v12 = hKey;
    v13 = (unsigned __int64)hKey - 1 <= 0xFFFFFFFFFFFFFFFDuLL;
    goto LABEL_9;
  }
  *a5 = 2 * v26 + 2;
  Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v26);
  operator delete(v19);
  if ( (unsigned __int64)hKey - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(hKey);
  return 2147942634LL;
}
