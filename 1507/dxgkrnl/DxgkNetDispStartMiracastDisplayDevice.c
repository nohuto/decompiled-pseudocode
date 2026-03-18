/*
 * XREFs of DxgkNetDispStartMiracastDisplayDevice @ 0x1C012A660
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchLengthW @ 0x1C0008474 (RtlStringCchLengthW.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkNetDispStartMiracastDisplayDeviceEx @ 0x1C012A7C0 (DxgkNetDispStartMiracastDisplayDeviceEx.c)
 */

__int64 __fastcall DxgkNetDispStartMiracastDisplayDevice(const wchar_t *Src, int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rax
  size_t v18; // rbx
  size_t pcchLength; // [rsp+28h] [rbp-260h] BYREF
  int v21; // [rsp+30h] [rbp-258h] BYREF
  _DWORD v22[139]; // [rsp+34h] [rbp-254h] BYREF

  memset(v22, 0, 0x224uLL);
  v21 = 552;
  v22[130] = a2;
  *(_QWORD *)&v22[131] = a3;
  if ( ExUuidCreate((UUID *)&v22[133]) >= 0 )
  {
    if ( ((unsigned __int8)Src & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(Src + 260) > MmUserProbeAddress || Src + 260 < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
    v11 = RtlStringCchLengthW(Src, 0x104uLL, &pcchLength);
    v16 = v11;
    if ( v11 >= 0 )
    {
      v18 = 2 * pcchLength;
      memmove(v22, Src, 2 * pcchLength);
      *(_WORD *)((char *)v22 + v18) = 0;
      return (unsigned int)DxgkNetDispStartMiracastDisplayDeviceEx(&v21, 0LL);
    }
    else
    {
      v10 = -2147483640;
      v17 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
      *(_QWORD *)(v17 + 24) = v16;
      WdLogEvent5_WdWarning(v17);
    }
  }
  else
  {
    v10 = -2147483647;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6, v8, v9) + 24) = 29522LL;
  }
  return v10;
}
