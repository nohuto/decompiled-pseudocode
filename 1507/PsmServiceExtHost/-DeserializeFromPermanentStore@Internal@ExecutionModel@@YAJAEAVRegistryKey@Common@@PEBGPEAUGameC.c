/*
 * XREFs of ?DeserializeFromPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAUGameConfig@2@PEAI@Z @ 0x180043AD8
 * Callers:
 *     ?GetGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEAUGameConfig@2@PEAI@Z @ 0x1800440D0 (-GetGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEAUGameConfig@2@PEAI@Z.c)
 * Callees:
 *     ??$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z @ 0x180004AC0 (--$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z.c)
 *     ?OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z @ 0x18001C21C (-OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z.c)
 *     ?GetStringValue@RegistryKey@Common@@QEAAJPEBG_KAEAVStringBuffer@2@PEAK@Z @ 0x18001C3E0 (-GetStringValue@RegistryKey@Common@@QEAAJPEBG_KAEAVStringBuffer@2@PEAK@Z.c)
 *     ?GetUInt32Value@RegistryKey@Common@@QEAAJPEBGPEAI@Z @ 0x18001C5D0 (-GetUInt32Value@RegistryKey@Common@@QEAAJPEBGPEAI@Z.c)
 *     ??1StringBuffer@Common@@QEAA@XZ @ 0x18001C8F0 (--1StringBuffer@Common@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     ?DecryptString@Internal@ExecutionModel@@YAJPEBEKAEAVStringBuffer@Common@@@Z @ 0x180043A08 (-DecryptString@Internal@ExecutionModel@@YAJPEBEKAEAVStringBuffer@Common@@@Z.c)
 *     ?GetValue@RegistryKey@Common@@QEAAJPEBG_KAEAVByteBuffer@2@PEAK@Z @ 0x180044C8C (-GetValue@RegistryKey@Common@@QEAAJPEBG_KAEAVByteBuffer@2@PEAK@Z.c)
 *     ?StoreBytes@CGameConfigAccumulator@Internal@ExecutionModel@@QEAAPEAEPEAEI@Z @ 0x180045CD8 (-StoreBytes@CGameConfigAccumulator@Internal@ExecutionModel@@QEAAPEAEPEAEI@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::DeserializeFromPermanentStore(
        HKEY *this,
        struct Common::RegistryKey *a2,
        unsigned __int16 *a3,
        struct ExecutionModel::GameConfig *a4)
{
  unsigned __int16 *v4; // rax
  unsigned int v6; // ecx
  const unsigned __int16 *v9; // rdi
  int UInt32Value; // ebx
  unsigned __int64 v11; // r8
  int Value; // eax
  struct Common::StringBuffer *v13; // r9
  __int64 v14; // r8
  unsigned __int8 *v15; // rdx
  __int64 v16; // rax
  const unsigned __int16 **v17; // r14
  unsigned int i; // esi
  const unsigned __int16 *v19; // rdx
  unsigned __int8 *v20; // rdx
  __int64 v21; // rax
  unsigned __int8 *v22; // rax
  unsigned int v23; // edx
  unsigned int *v25; // [rsp+20h] [rbp-E0h]
  HKEY v26; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v28; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v29[4]; // [rsp+40h] [rbp-C0h] BYREF
  const unsigned __int16 *v30; // [rsp+50h] [rbp-B0h] BYREF
  const unsigned __int16 *v31; // [rsp+58h] [rbp-A8h]
  unsigned int v32; // [rsp+60h] [rbp-A0h]
  int v33; // [rsp+64h] [rbp-9Ch]
  char v34; // [rsp+68h] [rbp-98h]
  _BYTE v35[48]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 *v36; // [rsp+A0h] [rbp-60h] BYREF
  void *Block; // [rsp+A8h] [rbp-58h]
  int v38; // [rsp+B0h] [rbp-50h]
  unsigned int v39; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int8 *v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C8h] [rbp-38h]
  int v42; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int8 *v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+E0h] [rbp-20h]
  unsigned __int8 v45[4]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v46[5]; // [rsp+F0h] [rbp-10h]

  v4 = a3;
  v30 = a3;
  v6 = *(_DWORD *)a4;
  v31 = a3;
  v32 = v6;
  v33 = 0;
  v34 = 0;
  if ( !a3 )
  {
    v4 = (unsigned __int16 *)v35;
    v6 = 40;
    v30 = (const unsigned __int16 *)v35;
    v32 = 40;
  }
  memset_0(v4, 0, v6);
  if ( v32 >= 0x28 )
  {
    v31 += 20;
    v34 = 1;
    v32 -= 40;
    v33 = 40;
    v9 = v30;
    v26 = 0LL;
    UInt32Value = Common::RegistryKey::OpenSubKey(this, (const unsigned __int16 *)a2, 0x20019u, &v26);
    if ( UInt32Value < 0 )
      goto LABEL_34;
    v40 = 0LL;
    v39 = 0;
    v41 = 0;
    v27 = 0;
    UInt32Value = Common::RegistryKey::GetUInt32Value(&v26, L"Type", (BYTE *)&v27);
    if ( UInt32Value < 0
      || (*((_DWORD *)v9 + 5) = v27,
          v28 = 0,
          UInt32Value = Common::RegistryKey::GetUInt32Value(&v26, L"Flags", (BYTE *)&v28),
          UInt32Value < 0)
      || (*((_DWORD *)v9 + 8) = v28,
          v29[0] = 0,
          UInt32Value = Common::RegistryKey::GetUInt32Value(&v26, L"Revision", (BYTE *)v29),
          UInt32Value < 0) )
    {
LABEL_33:
      Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v39);
LABEL_34:
      Common::AutoHandleCloseHKEY<HKEY__ *>(v26);
      return (unsigned int)UInt32Value;
    }
    *(_DWORD *)v9 = 0;
    Block = 0LL;
    LODWORD(v36) = 0;
    v38 = 0;
    Value = Common::RegistryKey::GetValue(
              (Common::RegistryKey *)&v26,
              L"Parent",
              v11,
              (struct Common::ByteBuffer *)&v36,
              v25);
    UInt32Value = 0;
    if ( Value < 0 )
      UInt32Value = Value;
    if ( UInt32Value < 0
      || (UInt32Value = ExecutionModel::Internal::DecryptString(
                          (BYTE *)Block,
                          (const unsigned __int8 *)(unsigned int)v36,
                          (Common::StringBuffer *)&v39,
                          v13),
          UInt32Value < 0) )
    {
LABEL_32:
      operator delete(Block);
      goto LABEL_33;
    }
    if ( v27 == 1 )
    {
      v15 = v40;
      v16 = -1LL;
      do
        ++v16;
      while ( *(_WORD *)&v40[2 * v16] );
    }
    else
    {
      if ( v27 != 2 )
        goto LABEL_23;
      v15 = v40;
      v16 = -1LL;
      do
        ++v16;
      while ( *(_WORD *)&v40[2 * v16] );
    }
    *((_QWORD *)v9 + 3) = ExecutionModel::Internal::CGameConfigAccumulator::StoreBytes(
                            (ExecutionModel::Internal::CGameConfigAccumulator *)&v30,
                            v15,
                            2 * ((int)v16 + 1));
LABEL_23:
    *((_DWORD *)v9 + 4) = 0;
    v17 = (const unsigned __int16 **)&ExecutionModel::Strings::DescriptorKeys;
    for ( i = 0; i < 3; ++i )
    {
      v19 = *v17;
      v43 = 0LL;
      v42 = 0;
      v44 = 0;
      if ( Common::RegistryKey::GetStringValue(&v26, v19, v14, (struct Common::StringBuffer *)&v42) >= 0 )
      {
        v20 = v43;
        *(_DWORD *)&v45[16 * *((unsigned int *)v9 + 4)] = i;
        v21 = -1LL;
        do
          ++v21;
        while ( *(_WORD *)&v20[2 * v21] );
        v22 = ExecutionModel::Internal::CGameConfigAccumulator::StoreBytes(
                (ExecutionModel::Internal::CGameConfigAccumulator *)&v30,
                v20,
                2 * ((int)v21 + 1));
        v23 = *((_DWORD *)v9 + 4);
        v46[2 * v23] = v22;
        *((_DWORD *)v9 + 4) = v23 + 1;
      }
      Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v42);
      ++v17;
    }
    *((_QWORD *)v9 + 1) = ExecutionModel::Internal::CGameConfigAccumulator::StoreBytes(
                            (ExecutionModel::Internal::CGameConfigAccumulator *)&v30,
                            v45,
                            16 * *((_DWORD *)v9 + 4));
    if ( !v34 )
      UInt32Value = -2147024662;
    *(_DWORD *)a4 = v33;
    goto LABEL_32;
  }
  v32 = 0;
  return (unsigned int)-2147024809;
}
