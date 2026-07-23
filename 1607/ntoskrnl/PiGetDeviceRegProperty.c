/*
 * XREFs of PiGetDeviceRegProperty @ 0x1404DC820
 * Callers:
 *     IopPnPDispatch @ 0x1404C9D24 (IopPnPDispatch.c)
 *     IoGetDeviceProperty @ 0x1404DC2F8 (IoGetDeviceProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     wcsstr @ 0x14014F70C (wcsstr.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PnpFindAlternateStringData @ 0x1404C5250 (PnpFindAlternateStringData.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     RtlFormatMessage @ 0x140686FE8 (RtlFormatMessage.c)
 */

__int64 __fastcall PiGetDeviceRegProperty(int a1, __int64 a2, int a3, int a4, WCHAR *Src, PULONG ReturnLength)
{
  size_t v8; // r13
  int DeviceRegProp; // eax
  unsigned int v10; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *v13; // rsi
  int AlternateStringData; // eax
  wchar_t *v15; // r12
  size_t v16; // r15
  wchar_t *v17; // rax
  __int64 v18; // rcx
  char v19; // cl
  int v20; // eax
  va_list v21; // r13
  const wchar_t *v22; // rcx
  unsigned int i; // r13d
  va_list v24; // rax
  __int64 v25; // rcx
  wchar_t *v26; // rax
  SIZE_T NumberOfBytes; // [rsp+54h] [rbp-ACh] BYREF
  size_t Size; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *Str; // [rsp+68h] [rbp-98h] BYREF
  PWSTR Message; // [rsp+70h] [rbp-90h]
  PWSTR Buffer; // [rsp+78h] [rbp-88h]
  va_list Arguments[20]; // [rsp+80h] [rbp-80h] BYREF

  LODWORD(Size) = a4;
  v8 = 0LL;
  NumberOfBytes = *ReturnLength;
  Buffer = Src;
  DeviceRegProp = CmGetDeviceRegProp(
                    PiPnpRtlCtx,
                    a1,
                    0,
                    a4,
                    (__int64)&NumberOfBytes + 4,
                    (__int64)Src,
                    (__int64)&NumberOfBytes,
                    0);
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
            PiPnpRtlCtx,
            a1,
            0,
            Size,
            (__int64)&NumberOfBytes + 4,
            (__int64)PoolWithTag,
            (__int64)&NumberOfBytes,
            0);
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
        AlternateStringData = PnpFindAlternateStringData(v13, NumberOfBytes, &Str, &Size);
        v15 = Str;
        v16 = (unsigned int)Size;
        if ( AlternateStringData
          && (Message = Str, v17 = wcsstr(Str, L";("), v8 = (size_t)v17, v18 = ((unsigned int)v16 >> 1) - 2, v17)
          && v15[v18] == 41 )
        {
          *v17 = 0;
          v21 = (va_list)(v17 + 2);
          v15[v18] = 0;
          Size = (size_t)(v17 + 2);
          memset(Arguments, 0, sizeof(Arguments));
          v22 = (const wchar_t *)Size;
          Arguments[0] = v21;
          for ( i = 1; ; ++i )
          {
            v26 = wcschr(v22, 0x2Cu);
            if ( !v26 )
            {
              v8 = Size;
              goto LABEL_17;
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
          v19 = 1;
        }
        else
        {
LABEL_17:
          v19 = 0;
        }
        if ( *ReturnLength < (unsigned int)v16 )
        {
          v10 = -1073741789;
        }
        else if ( v8 )
        {
          if ( v19 )
            v10 = -1073741619;
          else
            v10 = RtlFormatMessage(Message, 0, 0, 0, 1u, Arguments, Buffer, *ReturnLength, ReturnLength);
        }
        else
        {
          memmove(Buffer, v15, v16);
        }
        *ReturnLength = v16;
        goto LABEL_22;
      }
      v10 = -1073741584;
    }
LABEL_22:
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
