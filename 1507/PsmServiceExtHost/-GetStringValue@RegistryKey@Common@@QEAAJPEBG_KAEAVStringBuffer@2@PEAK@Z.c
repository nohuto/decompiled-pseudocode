/*
 * XREFs of ?GetStringValue@RegistryKey@Common@@QEAAJPEBG_KAEAVStringBuffer@2@PEAK@Z @ 0x18001C3E0
 * Callers:
 *     ?GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x180007CA0 (-GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 *     ?MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@2@PEA_NPEAU_GUID@@2@Z @ 0x18001B5B0 (-MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@.c)
 *     _lambda_50a6150c629f36decbcd8feeef80d8a2_::operator() @ 0x18001DE20 (_lambda_50a6150c629f36decbcd8feeef80d8a2_--operator().c)
 *     ?DeserializeFromPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAUGameConfig@2@PEAI@Z @ 0x180043AD8 (-DeserializeFromPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAUGameC.c)
 * Callees:
 *     ?SetCapacity@StringBuffer@Common@@QEAAJK@Z @ 0x18001C764 (-SetCapacity@StringBuffer@Common@@QEAAJK@Z.c)
 *     ?AlternateHeapReAlloc@@YAJPEAX_K1PEAPEAX@Z @ 0x18001DF58 (-AlternateHeapReAlloc@@YAJPEAX_K1PEAPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

int __fastcall Common::RegistryKey::GetStringValue(
        HKEY *this,
        const unsigned __int16 *a2,
        __int64 a3,
        struct Common::StringBuffer *a4)
{
  __int64 v4; // rbx
  BYTE *lpData; // rdi
  int v9; // eax
  int v10; // r14d
  unsigned int v11; // r14d
  HKEY v12; // rcx
  int result; // eax
  unsigned int v14; // edx
  bool v15; // zf
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // edi
  _WORD *v20; // rcx
  unsigned int v21; // eax
  void *v22; // rcx
  __int64 cbData; // [rsp+80h] [rbp+18h] BYREF
  void *v24; // [rsp+88h] [rbp+20h] BYREF

  cbData = a3;
  LODWORD(v4) = a3;
  while ( 1 )
  {
    lpData = (BYTE *)*((_QWORD *)a4 + 1);
    if ( lpData )
    {
      v9 = *((_DWORD *)a4 + 4);
      if ( v9 )
        v10 = v9 - 1;
      else
        v10 = 0;
      v11 = v10 + 1;
    }
    else
    {
      v11 = 0;
    }
    v12 = *this;
    LODWORD(cbData) = 2 * v11;
    result = RegQueryValueExW(v12, a2, 0LL, 0LL, lpData, (LPDWORD)&cbData);
    if ( !result || result == 234 )
    {
      if ( (cbData & 1) != 0 )
        return -2147024883;
      v14 = (unsigned int)cbData >> 1;
      if ( (unsigned int)cbData >> 1 )
      {
        if ( result || !lpData )
        {
          --v14;
        }
        else
        {
          v4 = v14 - 1;
          if ( !*(_WORD *)&lpData[2 * v4] )
            goto LABEL_12;
          if ( v14 + 1 <= v11 )
          {
            *(_WORD *)&lpData[2 * v14] = 0;
            LODWORD(v4) = v14;
            goto LABEL_12;
          }
          ++v14;
          result = 234;
        }
      }
      LODWORD(v4) = v14;
    }
    v15 = result == 0;
    if ( result > 0 )
    {
      result = (unsigned __int16)result | 0x80070000;
LABEL_12:
      v15 = result == 0;
    }
    if ( v15 )
      break;
    if ( result != -2147024662 )
      return result;
LABEL_29:
    if ( (unsigned int)v4 > 0x3FFFFFFF )
      return -2147023613;
    if ( (_DWORD)v4 )
    {
      v18 = *((_DWORD *)a4 + 4);
      v19 = v4 + 1;
      if ( (_DWORD)v4 + 1 != v18 )
      {
        result = AlternateHeapReAlloc(*((void **)a4 + 1), 2LL * v18, 2LL * v19, &v24);
        if ( result < 0 )
          return result;
        v20 = v24;
        v21 = *(_DWORD *)a4;
        *((_QWORD *)a4 + 1) = v24;
        *((_DWORD *)a4 + 4) = v19;
        if ( v21 > (unsigned int)v4 )
        {
          *(_DWORD *)a4 = v4;
          v20[(unsigned int)v4] = 0;
        }
        else if ( v21 < (unsigned int)v4 && !v21 )
        {
          *v20 = 0;
        }
      }
    }
    else
    {
      v22 = (void *)*((_QWORD *)a4 + 1);
      if ( v22 )
      {
        operator delete(v22);
        *((_QWORD *)a4 + 1) = 0LL;
        *(_DWORD *)a4 = 0;
      }
      *((_DWORD *)a4 + 4) = 0;
    }
  }
  if ( (unsigned int)v4 > v11 )
    goto LABEL_29;
  v16 = *((_DWORD *)a4 + 4);
  if ( v16 )
    v17 = v16 - 1;
  else
    v17 = 0;
  if ( (unsigned int)v4 <= v17 || (result = Common::StringBuffer::SetCapacity(a4, v4), result >= 0) )
  {
    *(_DWORD *)a4 = v4;
    if ( (_DWORD)v4 )
      *(_WORD *)(*((_QWORD *)a4 + 1) + 2LL * (unsigned int)v4) = 0;
    return 0;
  }
  return result;
}
