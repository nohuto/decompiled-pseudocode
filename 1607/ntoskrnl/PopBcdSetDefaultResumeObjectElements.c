/*
 * XREFs of PopBcdSetDefaultResumeObjectElements @ 0x14053D4D4
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x14053CC6C (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1406758B4 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     wcsrchr @ 0x14014F694 (wcsrchr.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PopBcdReadElement @ 0x14053D9D8 (PopBcdReadElement.c)
 *     BcdSetElementDataWithFlags @ 0x14053E01C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14053E1DC (BcdGetElementDataWithFlags.c)
 *     PopBcdSetupResumeObject @ 0x14053F610 (PopBcdSetupResumeObject.c)
 */

__int64 PopBcdSetDefaultResumeObjectElements(HANDLE BcdObjectHandle, HANDLE a2, ...)
{
  wchar_t *v4; // rsi
  char *PoolWithTag; // r14
  NTSTATUS Element; // ebx
  BCD_FLAGS v7; // r8d
  BCD_FLAGS v8; // r8d
  BCD_FLAGS v9; // r8d
  NTSTATUS v10; // eax
  wchar_t *v11; // rbx
  const wchar_t *v12; // r12
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rax
  size_t v16; // rbx
  BCD_FLAGS v17; // r8d
  BCD_FLAGS v18; // r8d
  BCD_FLAGS v19; // r8d
  ULONG v20; // ebx
  BCD_FLAGS v21; // r8d
  ULONG v23; // [rsp+30h] [rbp-40h] BYREF
  ULONG BufferSize; // [rsp+34h] [rbp-3Ch] BYREF
  _BYTE v25[4]; // [rsp+38h] [rbp-38h] BYREF
  ULONG v26; // [rsp+3Ch] [rbp-34h]
  wchar_t *Str; // [rsp+40h] [rbp-30h]
  PVOID P; // [rsp+48h] [rbp-28h]
  NTSTATUS ElementDataWithFlags; // [rsp+50h] [rbp-20h]
  NTSTATUS v30; // [rsp+54h] [rbp-1Ch]
  int v31; // [rsp+58h] [rbp-18h]
  _BYTE Buffer[16]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+40h] BYREF
  va_list va; // [rsp+B0h] [rbp+40h]
  __int64 v35; // [rsp+B8h] [rbp+48h] BYREF
  va_list va1; // [rsp+B8h] [rbp+48h]
  va_list va2; // [rsp+C0h] [rbp+50h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v33 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v35 = va_arg(va2, _QWORD);
  P = 0LL;
  v26 = 0;
  Str = 0LL;
  BufferSize = 0;
  v4 = 0LL;
  PoolWithTag = 0LL;
  Element = PopBcdReadElement(a2, 0x11000001u);
  if ( Element >= 0 )
  {
    Element = PopBcdReadElement(a2, 0x12000002u);
    if ( Element < 0 )
    {
      v4 = Str;
    }
    else
    {
      BufferSize = 8;
      ElementDataWithFlags = BcdGetElementDataWithFlags(a2, 0x15000052u, v7, Buffer, &BufferSize);
      v23 = 2;
      v30 = BcdGetElementDataWithFlags(a2, 0x16000054u, v8, va, &v23);
      v23 = 2;
      v10 = BcdGetElementDataWithFlags(a2, 0x16000046u, v9, v25, &v23);
      v4 = Str;
      v31 = v10;
      v11 = wcsrchr(Str, 0x5Cu);
      if ( v11 )
      {
        v12 = L"winresume.efi";
        if ( dword_1402FD030 != 2 )
          v12 = L"winresume.exe";
        v13 = -1LL;
        v14 = ((char *)v11 - (char *)v4 + 2) >> 1;
        v15 = -1LL;
        do
          ++v15;
        while ( v12[v15] );
        LODWORD(Str) = 2 * (v14 + v15) + 2;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)Str, 0x64634250u);
        if ( PoolWithTag )
        {
          v16 = 2LL * (unsigned int)v14;
          memmove(PoolWithTag, v4, v16);
          do
            ++v13;
          while ( v12[v13] );
          memmove(&PoolWithTag[v16], v12, 2 * v13 + 2);
          Element = BcdSetElementDataWithFlags(BcdObjectHandle, 0x11000001u, v17, P, v26);
          if ( Element >= 0 )
          {
            Element = BcdSetElementDataWithFlags(BcdObjectHandle, 0x12000002u, v18, PoolWithTag, (ULONG)Str);
            if ( Element >= 0 )
            {
              if ( ElementDataWithFlags >= 0 )
                BcdSetElementDataWithFlags(BcdObjectHandle, 0x15000052u, v19, Buffer, BufferSize);
              v20 = v23;
              if ( v30 >= 0 )
                BcdSetElementDataWithFlags(BcdObjectHandle, 0x16000054u, v19, va, v23);
              if ( v31 >= 0 )
                BcdSetElementDataWithFlags(BcdObjectHandle, 0x16000046u, v19, v25, v20);
              Element = PopBcdSetupResumeObject(BcdObjectHandle);
              if ( Element >= 0 )
              {
                BYTE1(v35) = 0;
                LOBYTE(v35) = (_BYTE)KdDebuggerEnabled != 0;
                Element = BcdSetElementDataWithFlags(BcdObjectHandle, 0x26000006u, v21, va1, 2u);
                if ( Element >= 0 )
                  Element = 0;
              }
            }
          }
        }
        else
        {
          Element = -1073741670;
        }
      }
      else
      {
        Element = -1073741788;
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)Element;
}
