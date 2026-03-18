/*
 * XREFs of ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C006A8E8
 * Callers:
 *     GetLocalMachineRegistryDWORDValues @ 0x1C006A9CC (GetLocalMachineRegistryDWORDValues.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C011D278 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C011D3B8 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0225A0C (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x1C006A96C (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __fastcall RtlUnicodeStringCopyString(struct _UNICODE_STRING *a1, const unsigned __int16 *a2)
{
  USHORT Length; // r8
  wchar_t *Buffer; // r10
  const wchar_t *v5; // r9
  NTSTATUS result; // eax
  USHORT MaximumLength; // dx
  size_t v8; // [rsp+20h] [rbp-18h]
  size_t pcchNewDestLength; // [rsp+48h] [rbp+10h] BYREF

  pcchNewDestLength = (size_t)a2;
  Length = a1->Length;
  Buffer = 0LL;
  v5 = 0LL;
  result = 0;
  if ( (a1->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0 || Length > MaximumLength || MaximumLength == 0xFFFF )
    return -1073741811;
  if ( !a1->Buffer && (Length || MaximumLength) )
  {
    result = -1073741811;
  }
  else
  {
    Buffer = a1->Buffer;
    v5 = (const wchar_t *)((unsigned __int64)MaximumLength >> 1);
  }
  if ( result >= 0 )
  {
    pcchNewDestLength = 0LL;
    result = RtlWideCharArrayCopyStringWorker(Buffer, (size_t)v5, &pcchNewDestLength, v5, v8);
    a1->Length = 2 * pcchNewDestLength;
  }
  return result;
}
