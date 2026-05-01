/*
 * XREFs of ?GetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@Z @ 0x1800442C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z @ 0x180004AC0 (--$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z.c)
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x1800078A0 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 *     ?OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z @ 0x18001C21C (-OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z.c)
 *     ?GetValue@RegistryKey@Common@@QEAAJPEBGPEAXPEAK2@Z @ 0x18001C3A4 (-GetValue@RegistryKey@Common@@QEAAJPEBGPEAXPEAK2@Z.c)
 *     ??1StringBuffer@Common@@QEAA@XZ @ 0x18001C8F0 (--1StringBuffer@Common@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1800247E8 (__report_rangecheckfailure.c)
 *     memcpy_0 @ 0x180024ED2 (memcpy_0.c)
 *     ?DecryptString@Internal@ExecutionModel@@YAJPEBEKAEAVStringBuffer@Common@@@Z @ 0x180043A08 (-DecryptString@Internal@ExecutionModel@@YAJPEBEKAEAVStringBuffer@Common@@@Z.c)
 *     ?GetValue@RegistryKey@Common@@QEAAJPEBG_KAEAVByteBuffer@2@PEAK@Z @ 0x180044C8C (-GetValue@RegistryKey@Common@@QEAAJPEBG_KAEAVByteBuffer@2@PEAK@Z.c)
 *     ?Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z @ 0x18004D900 (-Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::GetGameProperty(
        __int64 a1,
        const struct _GUID *a2,
        int a3,
        int *a4,
        unsigned int *a5)
{
  const WCHAR *v5; // rcx
  int v6; // ebx
  unsigned __int64 v8; // r12
  int v10; // edi
  __int64 v11; // rdi
  LSTATUS v12; // eax
  unsigned __int64 v13; // r8
  bool v14; // zf
  int Value; // eax
  struct Common::StringBuffer *v16; // r9
  void *v17; // rdi
  int v18; // esi
  size_t v19; // r8
  const unsigned __int16 *v20; // rdx
  unsigned __int64 v21; // r12
  int v23; // eax
  unsigned int *v24; // [rsp+20h] [rbp-B1h]
  HKEY v25; // [rsp+30h] [rbp-A1h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-99h] BYREF
  HKEY v27; // [rsp+40h] [rbp-91h] BYREF
  HKEY v28; // [rsp+48h] [rbp-89h] BYREF
  unsigned __int16 v29[4]; // [rsp+50h] [rbp-81h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-79h] BYREF
  void *Src; // [rsp+60h] [rbp-71h]
  int v32; // [rsp+68h] [rbp-69h]
  unsigned int v33; // [rsp+70h] [rbp-61h] BYREF
  unsigned __int8 *v34; // [rsp+78h] [rbp-59h] BYREF
  void *Block; // [rsp+80h] [rbp-51h]
  int v36; // [rsp+88h] [rbp-49h]
  unsigned __int16 v37[40]; // [rsp+90h] [rbp-41h] BYREF

  v5 = *(const WCHAR **)(a1 + 8);
  v6 = 0;
  v8 = a3;
  v25 = 0LL;
  *(_QWORD *)v29 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v26 = 36;
  v10 = ExecutionModel::Internal::OpenGameConfigStoreRegKeys(v5, (HKEY *)v29, &v28, &v27);
  if ( v10 < 0 )
    goto LABEL_34;
  if ( !*(_QWORD *)&a2->Data1 && !*(_QWORD *)a2->Data4 )
    goto LABEL_4;
  if ( (v8 & 0x80000000) == 0LL && v8 < 0xF )
  {
    if ( !a5 )
    {
LABEL_4:
      v10 = -2147024809;
LABEL_34:
      Common::AutoHandleCloseHKEY<HKEY__ *>(v27);
      Common::AutoHandleCloseHKEY<HKEY__ *>(v28);
      Common::AutoHandleCloseHKEY<HKEY__ *>(*(HKEY *)v29);
      Common::AutoHandleCloseHKEY<HKEY__ *>(v25);
      return (unsigned int)v10;
    }
    v11 = 3 * v8;
    v12 = Common::Guid::Encode(a2, v37, 0x24u, &v26);
    if ( v12 >= 0 )
    {
      if ( 2 * (unsigned __int64)v26 >= 0x4A )
        _report_rangecheckfailure();
      v37[v26] = 0;
      v12 = Common::RegistryKey::OpenSubKey(&v27, v37, 0x20019u, &v25);
      if ( v12 >= 0 )
      {
        if ( *((_BYTE *)&off_1800522B0 + 24 * v8 + 13) )
        {
          v14 = *((_DWORD *)&off_1800522B0 + 6 * v8 + 2) == 3;
          Block = 0LL;
          LODWORD(v34) = 0;
          v36 = 0;
          Src = 0LL;
          v30 = 0;
          v32 = 0;
          if ( !v14 )
          {
            Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v30);
            operator delete(0LL);
LABEL_33:
            v10 = -2147418113;
            goto LABEL_34;
          }
          Value = Common::RegistryKey::GetValue(
                    (Common::RegistryKey *)&v25,
                    (&off_1800522B0)[3 * v8],
                    v13,
                    (struct Common::ByteBuffer *)&v34,
                    v24);
          v10 = 0;
          if ( Value < 0 )
            v10 = Value;
          if ( v10 < 0 )
          {
            Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v30);
            operator delete(Block);
            goto LABEL_34;
          }
          v17 = Block;
          v18 = ExecutionModel::Internal::DecryptString(
                  (BYTE *)Block,
                  (const unsigned __int8 *)(unsigned int)v34,
                  (Common::StringBuffer *)&v30,
                  v16);
          if ( v18 < 0 )
          {
            Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v30);
            operator delete(v17);
            v10 = v18;
            goto LABEL_34;
          }
          if ( a4 )
          {
            v19 = *a5;
            if ( v19 < 2 * (unsigned __int64)(v30 + 1) )
            {
              *a5 = 2 * v30 + 2;
              Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v30);
              operator delete(v17);
              v10 = -2147024662;
              goto LABEL_34;
            }
            memcpy_0(a4, Src, v19);
          }
          else
          {
            *a5 = 2 * v30 + 2;
          }
          Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v30);
          operator delete(v17);
          goto LABEL_36;
        }
        v20 = (&off_1800522B0)[3 * v8];
        v21 = (int)*a5;
        v12 = Common::RegistryKey::GetValue(&v25, v20, (BYTE *)a4, a5, &v33);
        v18 = v12;
        if ( v12 >= 0 )
        {
          if ( v33 != *((_DWORD *)&off_1800522B0 + 2 * v11 + 2) )
            goto LABEL_33;
          if ( a4 && *((_BYTE *)&off_1800522B0 + 8 * v11 + 14) )
          {
            if ( v21 < 4 || v33 != 4 )
              goto LABEL_33;
            v23 = *a4;
            LOBYTE(v6) = _bittest(&v23, (unsigned int)(&off_1800522B0)[v11 + 1]);
            *a4 = v6;
          }
LABEL_36:
          Common::AutoHandleCloseHKEY<HKEY__ *>(v27);
          Common::AutoHandleCloseHKEY<HKEY__ *>(v28);
          Common::AutoHandleCloseHKEY<HKEY__ *>(*(HKEY *)v29);
          Common::AutoHandleCloseHKEY<HKEY__ *>(v25);
          return (unsigned int)v18;
        }
      }
    }
    v10 = v12;
    goto LABEL_34;
  }
  Common::AutoHandleCloseHKEY<HKEY__ *>(v27);
  Common::AutoHandleCloseHKEY<HKEY__ *>(v28);
  Common::AutoHandleCloseHKEY<HKEY__ *>(*(HKEY *)v29);
  Common::AutoHandleCloseHKEY<HKEY__ *>(v25);
  return 2147942487LL;
}
