/*
 * XREFs of RtlStringCbLengthW @ 0x1C000E8B0
 * Callers:
 *     DpiAppendStringToString @ 0x1C00D7200 (DpiAppendStringToString.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x1C00084A0 (RtlStringLengthWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rax
  size_t v4; // rdx
  size_t *v5; // r11
  int v6; // r8d
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = cbMax >> 1;
  pcchLength = 0LL;
  v5 = pcbLength;
  if ( psz && v4 <= 0x7FFFFFFF )
  {
    v6 = RtlStringLengthWorkerW(psz, v4, &pcchLength);
    v3 = pcchLength;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v5 )
  {
    if ( v6 < 0 )
      *v5 = 0LL;
    else
      *v5 = 2 * v3;
  }
  return v6;
}
