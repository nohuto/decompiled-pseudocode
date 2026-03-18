/*
 * XREFs of PiGetDeviceRegProperty @ 0x1404E3234
 * Callers:
 *     IoGetDeviceProperty @ 0x1404E2C80 (IoGetDeviceProperty.c)
 *     IopPnPDispatch @ 0x14055D5D4 (IopPnPDispatch.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     wcschr @ 0x140173B98 (wcschr.c)
 *     wcsstr @ 0x140173DA0 (wcsstr.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     PnpFindAlternateStringData @ 0x14054DA2C (PnpFindAlternateStringData.c)
 *     RtlFormatMessage @ 0x1406CA6BC (RtlFormatMessage.c)
 */

__int64 __fastcall PiGetDeviceRegProperty(__int64 a1, __int64 a2, int a3, int a4, WCHAR *Src, PULONG ReturnLength)
{
  size_t v8; // r13
  int DeviceRegProp; // eax
  unsigned int v10; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *v13; // rsi
  int AlternateStringData; // eax
  wchar_t *v15; // r12
  size_t v16; // r15
  char v17; // cl
  wchar_t *v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  va_list v21; // r13
  const wchar_t *v22; // rcx
  unsigned int i; // r13d
  va_list v24; // rax
  __int64 v25; // rcx
  wchar_t *v26; // rax
  SIZE_T NumberOfBytes; // [rsp+54h] [rbp-ACh] BYREF
  size_t Size; // [rsp+60h] [rbp-A0h] BYREF
  PWSTR Message; // [rsp+68h] [rbp-98h]
  PWSTR Buffer; // [rsp+70h] [rbp-90h]
  wchar_t *Str; // [rsp+78h] [rbp-88h] BYREF
  va_list Arguments[20]; // [rsp+80h] [rbp-80h] BYREF

  LODWORD(Size) = a4;
  Buffer = Src;
  v8 = 0LL;
  NumberOfBytes = *ReturnLength;
  DeviceRegProp = CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    a1,
                    0LL,
                    a4,
                    (__int64)&NumberOfBytes + 4,
                    (__int64)Src,
                    (__int64)&NumberOfBytes);
  v10 = DeviceRegProp;
  if ( a3 == 1 )
  {
    if ( DeviceRegProp < 0 )
    {
      if ( DeviceRegProp != -1073741789 )
        return v10;
    }
    else if ( HIDWORD(NumberOfBytes) != 1 )
    {
      return (unsigned int)-1073741584;
    }
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6F697050u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    if ( v10 != -1073741789 )
    {
      memmove(PoolWithTag, Src, (unsigned int)NumberOfBytes);
      goto LABEL_15;
    }
    v20 = CmGetDeviceRegProp(
            *(__int64 *)&PiPnpRtlCtx,
            a1,
            0LL,
            Size,
            (__int64)&NumberOfBytes + 4,
            (__int64)PoolWithTag,
            (__int64)&NumberOfBytes);
    v10 = v20;
    if ( v20 < 0 )
    {
      if ( v20 == -1073741789 )
        *ReturnLength = NumberOfBytes;
    }
    else
    {
      if ( HIDWORD(NumberOfBytes) == 1 )
      {
LABEL_15:
        LODWORD(Size) = NumberOfBytes;
        Str = v13;
        Message = v13;
        AlternateStringData = PnpFindAlternateStringData(v13, (unsigned int)NumberOfBytes, &Str, &Size);
        v15 = Str;
        v16 = (unsigned int)Size;
        if ( AlternateStringData
          && (Message = Str, v18 = wcsstr(Str, L";("), v8 = (size_t)v18, v19 = ((unsigned int)v16 >> 1) - 2, v18)
          && v15[v19] == 41 )
        {
          *v18 = 0;
          v21 = (va_list)(v18 + 2);
          v15[v19] = 0;
          Size = (size_t)(v18 + 2);
          memset(Arguments, 0, sizeof(Arguments));
          v22 = (const wchar_t *)Size;
          Arguments[0] = v21;
          for ( i = 1; ; ++i )
          {
            v26 = wcschr(v22, 0x2Cu);
            if ( !v26 )
            {
              v8 = Size;
              goto LABEL_16;
            }
            *v26 = 0;
            v24 = (va_list)(v26 + 1);
            if ( i >= 0x13 )
              break;
            v25 = i;
            Arguments[v25] = v24;
            v22 = (const wchar_t *)v24;
          }
          v8 = Size;
          v17 = 1;
        }
        else
        {
LABEL_16:
          v17 = 0;
        }
        if ( *ReturnLength < (unsigned int)v16 )
        {
          v10 = -1073741789;
        }
        else if ( v8 )
        {
          if ( v17 )
            v10 = -1073741619;
          else
            v10 = RtlFormatMessage(Message, 0, 0, 0, 1u, Arguments, Buffer, *ReturnLength, ReturnLength);
        }
        else
        {
          memmove(Buffer, v15, v16);
        }
        *ReturnLength = v16;
        goto LABEL_21;
      }
      v10 = -1073741584;
    }
LABEL_21:
    ExFreePoolWithTag(v13, 0);
    return v10;
  }
  if ( DeviceRegProp >= 0 )
  {
    if ( HIDWORD(NumberOfBytes) != a3 )
      v10 = -1073741584;
    if ( (v10 & 0x80000000) == 0 )
      goto LABEL_8;
  }
  if ( v10 == -1073741789 )
LABEL_8:
    *ReturnLength = NumberOfBytes;
  return v10;
}
