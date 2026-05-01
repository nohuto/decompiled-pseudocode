/*
 * XREFs of ?VerifyParentIdentifier@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBG1@Z @ 0x1800461BC
 * Callers:
 *     ?GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z @ 0x180002B90 (-GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z.c)
 *     ?GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x180007CA0 (-GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 * Callees:
 *     ??$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z @ 0x180004AC0 (--$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z.c)
 *     ?CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z @ 0x180017C50 (-CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z.c)
 *     ?OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z @ 0x18001C21C (-OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z.c)
 *     ??1StringBuffer@Common@@QEAA@XZ @ 0x18001C8F0 (--1StringBuffer@Common@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     ?DecryptString@Internal@ExecutionModel@@YAJPEBEKAEAVStringBuffer@Common@@@Z @ 0x180043A08 (-DecryptString@Internal@ExecutionModel@@YAJPEBEKAEAVStringBuffer@Common@@@Z.c)
 *     ?GetValue@RegistryKey@Common@@QEAAJPEBG_KAEAVByteBuffer@2@PEAK@Z @ 0x180044C8C (-GetValue@RegistryKey@Common@@QEAAJPEBG_KAEAVByteBuffer@2@PEAK@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::VerifyParentIdentifier(
        HKEY *this,
        struct Common::RegistryKey *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  unsigned int v4; // ebx
  void *v6; // rdi
  int v7; // ecx
  __int64 v8; // r8
  int Value; // eax
  struct Common::StringBuffer *v10; // r9
  unsigned __int16 *v11; // r8
  unsigned __int16 *v12; // rax
  __int64 v13; // rsi
  int v14; // edx
  int v15; // ecx
  HKEY v17; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int8 *v18; // [rsp+38h] [rbp-61h] BYREF
  void *Block; // [rsp+40h] [rbp-59h]
  int v20; // [rsp+48h] [rbp-51h]
  unsigned int v21; // [rsp+50h] [rbp-49h] BYREF
  ExecutionModel::Internal *v22; // [rsp+58h] [rbp-41h]
  int v23; // [rsp+60h] [rbp-39h]
  unsigned __int16 v24[48]; // [rsp+70h] [rbp-29h] BYREF

  v4 = 0;
  v17 = 0LL;
  v22 = 0LL;
  v21 = 0;
  v23 = 0;
  v6 = 0LL;
  Block = 0LL;
  LODWORD(v18) = 0;
  v20 = 0;
  v7 = Common::RegistryKey::OpenSubKey(this, a3, 0x20019u, &v17);
  if ( v7 < 0 )
    goto LABEL_12;
  Value = Common::RegistryKey::GetValue(&v17, L"Parent", v8, (struct Common::ByteBuffer *)&v18);
  v6 = Block;
  v7 = 0;
  if ( Value < 0 )
    v7 = Value;
  if ( v7 < 0 )
    goto LABEL_12;
  v7 = ExecutionModel::Internal::DecryptString(
         (BYTE *)Block,
         (const unsigned __int8 *)(unsigned int)v18,
         (Common::StringBuffer *)&v21,
         v10);
  if ( v7 < 0 )
    goto LABEL_12;
  v7 = ExecutionModel::Internal::CalcSHA1(v22, v24, v11);
  if ( v7 < 0 )
    goto LABEL_12;
  v12 = v24;
  v13 = a2 - (struct Common::RegistryKey *)v24;
  do
  {
    v14 = *(unsigned __int16 *)((char *)v12 + v13);
    v15 = *v12 - v14;
    if ( v15 )
      break;
    ++v12;
  }
  while ( v14 );
  if ( v15 )
  {
    v7 = -2147418113;
LABEL_12:
    v4 = v7;
  }
  operator delete(v6);
  Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v21);
  Common::AutoHandleCloseHKEY<HKEY__ *>(v17);
  return v4;
}
