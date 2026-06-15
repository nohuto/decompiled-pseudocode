/*
 * XREFs of ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x18002DC00
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18002DAA8 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     ?Free@ARI@@YAXPEAX@Z @ 0x180032190 (-Free@ARI@@YAXPEAX@Z.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 */

ULONG __fastcall ARI::ProcessToken::SysAppId::Open(
        HANDLE TokenHandle,
        _QWORD *a2,
        const UNICODE_STRING **a3,
        const struct _TOKEN_SECURITY_ATTRIBUTE_V1 **a4)
{
  NTSTATUS InformationToken; // eax
  unsigned __int128 v8; // rax
  ULONG v9; // edi
  __int64 v10; // rsi
  _DWORD *v11; // rbx
  unsigned int v12; // ebp
  const UNICODE_STRING *v13; // r14
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  size_t Size; // [rsp+88h] [rbp+20h] BYREF

  Size = (size_t)a4;
  InformationToken = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, 0LL, 0, (PULONG)&Size);
  if ( InformationToken == -1073741789 )
  {
    v8 = (unsigned int)Size * (unsigned __int128)0x10u;
    v9 = 0;
    if ( is_mul_ok((unsigned int)Size, 0x10uLL) )
    {
      *(_QWORD *)&v8 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, DWORD2(v8), 16LL * (unsigned int)Size);
      v10 = v8;
      v11 = (_DWORD *)v8;
      if ( (_QWORD)v8 )
      {
        memset_0((void *)v8, 0, (unsigned int)Size);
        LODWORD(v8) = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, v11, Size, (PULONG)&Size);
        if ( (v8 & 0x80000000) != 0LL )
        {
          v9 = RtlNtStatusToDosErrorNoTeb(v8);
        }
        else if ( v11[1] && (RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID"), v12 = 0, v11[1]) )
        {
          while ( 1 )
          {
            v13 = (const UNICODE_STRING *)(*(_QWORD *)(v10 + 8) + 40LL * v12);
            if ( !RtlCompareUnicodeString(&DestinationString, v13, 1u) )
              break;
            if ( ++v12 >= *(_DWORD *)(v10 + 4) )
              goto LABEL_9;
          }
          *a3 = v13;
          v11 = 0LL;
          *a2 = v10;
        }
        else
        {
LABEL_9:
          v9 = 1168;
        }
        goto LABEL_10;
      }
    }
    else
    {
      v11 = 0LL;
    }
    v9 = 8;
LABEL_10:
    ARI::Free(v11, *((void **)&v8 + 1));
    return v9;
  }
  if ( InformationToken )
    return RtlNtStatusToDosErrorNoTeb(InformationToken);
  else
    return 1359;
}
