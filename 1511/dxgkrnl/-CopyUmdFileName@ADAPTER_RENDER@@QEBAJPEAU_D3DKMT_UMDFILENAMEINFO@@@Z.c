/*
 * XREFs of ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C006A5EC
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C008BD90 (DxgkQueryAdapterInfo.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1C0001B30 (RtlStringCbLengthW.c)
 *     RtlStringCbCopyNW @ 0x1C000B538 (RtlStringCbCopyNW.c)
 */

int __fastcall ADAPTER_RENDER::CopyUmdFileName(ADAPTER_RENDER *this, struct _D3DKMT_UMDFILENAMEINFO *a2)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rbx
  size_t v6; // rdi
  KMTUMDVERSION v7; // esi
  size_t v8; // r9
  int result; // eax
  size_t v10; // rdx
  int v11; // ecx
  size_t pcbLength; // [rsp+40h] [rbp+18h] BYREF

  CurrentProcess = PsGetCurrentProcess();
  if ( PsGetProcessWow64Process(CurrentProcess) )
  {
    v5 = *((_QWORD *)this + 34);
    v6 = *((unsigned __int16 *)this + 132);
  }
  else
  {
    v5 = *((_QWORD *)this + 32);
    v6 = *((unsigned __int16 *)this + 124);
  }
  v7 = KMTUMDVERSION_DX9;
  v8 = 0LL;
  pcbLength = 0LL;
  while ( 1 )
  {
    v5 += v8;
    result = RtlStringCbLengthW((STRSAFE_PCNZWCH)v5, v6, &pcbLength);
    if ( result < 0 )
      break;
    if ( !pcbLength )
      return -1073741811;
    v8 = pcbLength + 2;
    ++v7;
    v6 -= pcbLength + 2;
    pcbLength += 2LL;
    if ( (unsigned int)v7 > a2->Version )
    {
      if ( v8 != 6 )
        return RtlStringCbCopyNW(a2->UmdFileName, v10, (STRSAFE_PCNZWCH)v5, v8);
      v11 = *(_DWORD *)L"<>" - *(_DWORD *)v5;
      if ( *(_DWORD *)L"<>" == *(_DWORD *)v5 )
        v11 = asc_1C00EC3C0[2] - *(unsigned __int16 *)(v5 + 4);
      if ( v11 )
        return RtlStringCbCopyNW(a2->UmdFileName, v10, (STRSAFE_PCNZWCH)v5, v8);
      return -1073741811;
    }
  }
  return result;
}
