/*
 * XREFs of ?Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z @ 0x1800052E0
 * Callers:
 *     ?Init@ResourceManagerClientProxy@@IEAAJPEBGH@Z @ 0x180004EB8 (-Init@ResourceManagerClientProxy@@IEAAJPEBGH@Z.c)
 *     ?GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@ExecutionModel@@@Z @ 0x18000A6E8 (-GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@Ex.c)
 * Callees:
 *     ?GetResourceManagerRootHive@ExecutionModel@@YAPEAUHKEY__@@XZ @ 0x180004D04 (-GetResourceManagerRootHive@ExecutionModel@@YAPEAUHKEY__@@XZ.c)
 *     ?ReadMediumThreshold@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAXPEAUHKEY__@@PEAN@Z @ 0x18000525C (-ReadMediumThreshold@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAXPEAUHKEY__@@PEAN@Z.c)
 *     ??$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV?$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@0@@Z @ 0x18000580C (--$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV-$auto_x.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetTypeToInfoConverter::Initialize(
        ExecutionModel::ResourceSetTypeToInfoConverter *this,
        const unsigned __int16 *a2)
{
  HKEY ResourceManagerRootHive; // rbx
  HKEY *v4; // rax
  LSTATUS v5; // eax
  signed int v6; // edi
  HKEY *v7; // rax
  LSTATUS v8; // eax
  ExecutionModel::ResourceSetTypeToInfoConverter *v9; // rcx
  HKEY v10; // xmm7_8
  const WCHAR **v11; // rdi
  char *v12; // r13
  signed int v13; // r14d
  __int64 v14; // rsi
  const WCHAR *v15; // rdx
  LSTATUS v16; // eax
  HKEY v17; // r12
  unsigned __int64 v18; // rax
  unsigned int v19; // ebx
  wchar_t **v20; // rdi
  char *v21; // r15
  const WCHAR *v22; // rdx
  BYTE *lpData; // r14
  HKEY v24; // rsi
  LSTATUS Value; // eax
  int v26; // eax
  DWORD v27; // r14d
  __int64 v28; // rcx
  __int64 v29; // rdx
  bool v30; // al
  double v31; // xmm0_8
  int v32; // eax
  HKEY v33; // rbx
  const WCHAR **v34; // rdi
  BYTE *v35; // rbx
  __int64 v36; // rsi
  const WCHAR *v37; // rdx
  _DWORD *v39; // rdi
  __int64 i; // rcx
  BYTE Data[8]; // [rsp+38h] [rbp-29h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-21h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-19h] BYREF
  HKEY v44; // [rsp+50h] [rbp-11h] BYREF
  HKEY v45; // [rsp+58h] [rbp-9h] BYREF
  __int128 v46; // [rsp+60h] [rbp-1h]
  DWORD v48; // [rsp+D8h] [rbp+77h] BYREF
  HKEY cbData; // [rsp+E0h] [rbp+7Fh] BYREF

  v45 = 0LL;
  v44 = 0LL;
  hKey = 0LL;
  ResourceManagerRootHive = (HKEY)ExecutionModel::GetResourceManagerRootHive(this);
  v4 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&v44);
  v5 = RegOpenKeyW(ResourceManagerRootHive, L"System\\ResourceManager\\Policy\\ResourceSetTypePolicyTable", v4);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 > 0 )
      v6 = (unsigned __int16)v5 | 0x80070000;
  }
  else
  {
    v7 = (HKEY *)tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(&v45);
    v8 = RegOpenKeyW(ResourceManagerRootHive, L"System\\ResourceManager", v7);
    v6 = v8;
    if ( v8 )
    {
      if ( v8 > 0 )
        v6 = (unsigned __int16)v8 | 0x80070000;
    }
    else
    {
      ExecutionModel::ResourceSetTypeToInfoConverter::ReadMediumThreshold(v9, v45, (double *)&cbData);
      v10 = cbData;
      v11 = (const WCHAR **)&ExecutionModel::ResourceSetTypeName;
      v12 = (char *)this + 128;
      *(_QWORD *)&v46 = &ExecutionModel::ResourceSetTypeName;
      v13 = 0;
      v48 = 0;
      v14 = 0x24704100001LL;
      while ( 1 )
      {
        if ( hKey )
          RegCloseKey(hKey);
        v15 = *v11;
        hKey = 0LL;
        v16 = RegOpenKeyW(v44, v15, &hKey);
        v6 = v16;
        if ( v16 )
          break;
        v17 = hKey;
        *((_DWORD *)v12 - 32) = v13;
        if ( (v13 >= 26 || v13 < 14) && (v13 < 42 || v13 >= 52) )
        {
          switch ( v13 )
          {
            case 0:
            case 5:
            case 6:
            case 7:
            case 26:
            case 30:
            case 32:
            case 33:
            case 34:
            case 41:
            case 52:
              *((_WORD *)v12 - 56) &= 0xFFE9u;
              *((_WORD *)v12 - 56) |= 0x69u;
              break;
            case 11:
              *((_DWORD *)v12 - 21) &= ~1u;
              *((_DWORD *)v12 - 21) |= 2u;
              break;
            case 12:
            case 13:
            case 35:
            case 36:
            case 39:
            case 40:
              *((_WORD *)v12 - 44) |= 8u;
              break;
            default:
              break;
          }
        }
        v18 = *((int *)v12 - 32);
        if ( (unsigned int)v18 <= 0x29 && _bittest64(&v14, v18) )
          *(v12 - 86) |= 0x40u;
        phkResult = 0LL;
        RegOpenKeyW(v17, a2, &phkResult);
        v19 = 0;
        v20 = &off_18000E8B8;
        v21 = v12 - 128;
        do
        {
          v22 = *v20;
          lpData = (BYTE *)&v21[*((unsigned int *)v20 - 2)];
          v24 = phkResult;
          LODWORD(cbData) = 4;
          Value = RegQueryValueExW(v17, v22, 0LL, 0LL, lpData, (LPDWORD)&cbData);
          if ( Value )
          {
            if ( v24 )
              Value = RegQueryValueExW(v24, *v20, 0LL, 0LL, lpData, (LPDWORD)&cbData);
            if ( Value )
            {
              if ( !*((_BYTE *)v20 + 8) )
              {
                v27 = v48;
                v6 = -2147024809;
                goto LABEL_28;
              }
              *(_DWORD *)lpData = *((_DWORD *)v20 + 3);
            }
          }
          ++v19;
          v20 += 3;
        }
        while ( v19 < 0xB );
        v26 = *((_DWORD *)v12 - 30);
        *((_DWORD *)v12 - 6) = v26;
        *(_DWORD *)v12 = v26;
        *((_DWORD *)v12 + 6) = v26;
        if ( *((_QWORD *)v12 - 1) )
        {
          v27 = v48;
        }
        else
        {
          v27 = v48;
          if ( v48 > 0x38 || (v28 = 0x100002002000400LL, !_bittest64(&v28, v48)) )
          {
            *((_QWORD *)v12 - 1) = *((_QWORD *)v12 - 7);
            *((_DWORD *)v12 - 4) = 1;
          }
        }
        v29 = *((_QWORD *)v12 - 7);
        v30 = v29 != *((_QWORD *)v12 - 1);
        *((_DWORD *)v12 + 61) &= ~0x40000u;
        *((_DWORD *)v12 + 61) |= v30 << 18;
        v31 = (double)(int)v29;
        if ( v29 < 0 )
          v31 = v31 + 1.844674407370955e19;
        v32 = *((_DWORD *)v12 - 30);
        *((_QWORD *)v12 - 13) = v29;
        *((_DWORD *)v12 - 24) = v32;
        *((_QWORD *)v12 + 29) = (unsigned int)(int)(v31 * *(double *)&v10);
        LOBYTE(v32) = *((_DWORD *)v12 - 12) != 0;
        *((_WORD *)v21 + 20) &= ~2u;
        *((_WORD *)v21 + 20) |= 2 * (v32 & 1);
        v6 = 0;
LABEL_28:
        if ( phkResult )
          RegCloseKey(phkResult);
        if ( v6 < 0 )
          goto LABEL_41;
        v33 = hKey;
        cbData = 0LL;
        v48 = 4;
        if ( !RegQueryValueExW(hKey, L"StandardExternalResources", 0LL, 0LL, Data, &v48) )
        {
          v39 = v12 + 44;
          for ( i = 44LL; i; --i )
            *v39++ = 1;
        }
        if ( cbData )
          RegCloseKey(cbData);
        cbData = 0LL;
        if ( !RegOpenKeyW(v33, L"ExternalResources", &cbData) )
        {
          v34 = (const WCHAR **)off_18000EBD8;
          v35 = (BYTE *)(v12 + 44);
          v36 = 45LL;
          do
          {
            v37 = *v34;
            v48 = 4;
            RegQueryValueExW(cbData, v37, 0LL, 0LL, v35, &v48);
            v35 += 4;
            ++v34;
            --v36;
          }
          while ( v36 );
        }
        if ( cbData )
          RegCloseKey(cbData);
        v11 = (const WCHAR **)(v46 + 8);
        v13 = v27 + 1;
        v12 += 376;
        v48 = v13;
        *(_QWORD *)&v46 = v46 + 8;
        v14 = 0x24704100001LL;
        if ( (unsigned int)v13 >= 0x39 )
        {
          v6 = 0;
          goto LABEL_41;
        }
      }
      if ( v16 > 0 )
        v6 = (unsigned __int16)v16 | 0x80070000;
    }
  }
LABEL_41:
  if ( hKey )
    RegCloseKey(hKey);
  if ( v44 )
    RegCloseKey(v44);
  if ( v45 )
    RegCloseKey(v45);
  return (unsigned int)v6;
}
