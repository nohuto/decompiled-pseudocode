/*
 * XREFs of ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x1C00D8650
 * Callers:
 *     ndisNdkPcwAddCounter @ 0x1C0064DEC (ndisNdkPcwAddCounter.c)
 *     ?ndisPDPcwQueueDepthCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C00709B0 (-ndisPDPcwQueueDepthCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 *     ?ndisPDPcwUtilizationCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C0070B70 (-ndisPDPcwUtilizationCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 *     ndisNdkPcwRemoveCounter @ 0x1C00D7688 (ndisNdkPcwRemoveCounter.c)
 *     ?ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z @ 0x1C00D8248 (-ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisWildCardStringMatch(
        const struct _UNICODE_STRING *a1,
        const struct _UNICODE_STRING *a2,
        char a3)
{
  wchar_t *Buffer; // r8
  unsigned __int16 v4; // di
  unsigned __int16 Length; // si
  unsigned __int16 v6; // bx
  wchar_t *v7; // r13
  unsigned __int16 v8; // r15
  unsigned __int16 v9; // r14
  unsigned __int16 v10; // r12
  unsigned __int16 v11; // si
  char v12; // bp
  wchar_t v13; // dx
  unsigned __int8 result; // al
  WCHAR String1; // [rsp+70h] [rbp+8h] BYREF
  wchar_t *v16; // [rsp+78h] [rbp+10h]
  WCHAR String2; // [rsp+80h] [rbp+18h] BYREF

  LOBYTE(String2) = a3;
  Buffer = a2->Buffer;
  v4 = 0;
  Length = a2->Length;
  v6 = 0;
  v7 = a1->Buffer;
  v8 = 0;
  v9 = a1->Length >> 1;
  v16 = Buffer;
  v10 = 0;
  v11 = Length >> 1;
  while ( 2 )
  {
    v12 = 0;
    while ( v4 < v9 )
    {
      v13 = v7[v4];
      if ( v13 == 42 )
      {
        v8 = v4;
        v12 = 1;
        ++v4;
        v10 = v6;
      }
      else
      {
        if ( v13 == 63 )
        {
          if ( v6 == v11 )
            goto LABEL_14;
        }
        else
        {
          if ( v6 == v11 )
            goto LABEL_14;
          String1 = v7[v4];
          String2 = Buffer[v6];
          if ( RtlCompareUnicodeStrings(&String1, 1uLL, &String2, 1uLL, 1u) )
            goto LABEL_14;
          Buffer = v16;
        }
        ++v4;
        ++v6;
      }
    }
    if ( v6 == v11 )
      return 1;
LABEL_14:
    result = 0;
    if ( v12 && v6 < v11 )
    {
      Buffer = v16;
      v4 = v8;
      v6 = v10 + 1;
      continue;
    }
    return result;
  }
}
