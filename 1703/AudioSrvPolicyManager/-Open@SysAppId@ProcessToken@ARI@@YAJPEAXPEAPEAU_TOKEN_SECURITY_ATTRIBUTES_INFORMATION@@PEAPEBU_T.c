/*
 * XREFs of ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x18001F210
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18001F418 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     ??$AutoPtrAriHeapDeallocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAXPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@Z @ 0x18001F5B8 (--$AutoPtrAriHeapDeallocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAXPEAU_TOKEN_SECURIT.c)
 *     memset @ 0x18002167E (memset.c)
 */

ULONG __fastcall ARI::ProcessToken::SysAppId::Open(
        HANDLE TokenHandle,
        _QWORD *a2,
        const UNICODE_STRING **a3,
        const struct _TOKEN_SECURITY_ATTRIBUTE_V1 **a4)
{
  NTSTATUS InformationToken; // eax
  ULONG v9; // edi
  void *v10; // rbx
  PVOID Heap; // rax
  PVOID v12; // rsi
  int v13; // eax
  unsigned int v14; // ebp
  const UNICODE_STRING *v15; // r14
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  size_t Size; // [rsp+88h] [rbp+20h] BYREF

  Size = (size_t)a4;
  InformationToken = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, 0LL, 0, (PULONG)&Size);
  if ( InformationToken == -1073741789 )
  {
    v9 = 0;
    if ( is_mul_ok((unsigned int)Size, 0x10uLL) )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 16LL * (unsigned int)Size);
      v12 = Heap;
      v10 = Heap;
      if ( Heap )
      {
        memset(Heap, 0, (unsigned int)Size);
        v13 = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, v12, Size, (PULONG)&Size);
        if ( v13 >= 0 )
        {
          if ( *((_DWORD *)v12 + 1)
            && (RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID"), v14 = 0, *((_DWORD *)v12 + 1)) )
          {
            while ( 1 )
            {
              v15 = (const UNICODE_STRING *)(*((_QWORD *)v12 + 1) + 40LL * v14);
              if ( !RtlCompareUnicodeString(&DestinationString, v15, 1u) )
                break;
              if ( ++v14 >= *((_DWORD *)v12 + 1) )
                goto LABEL_15;
            }
            *a3 = v15;
            v10 = 0LL;
            *a2 = v12;
          }
          else
          {
LABEL_15:
            v9 = 1168;
          }
        }
        else
        {
          v9 = RtlNtStatusToDosErrorNoTeb(v13);
        }
        goto LABEL_16;
      }
    }
    else
    {
      v10 = 0LL;
    }
    v9 = 8;
LABEL_16:
    ARI::AutoPtrAriHeapDeallocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(v10);
    return v9;
  }
  if ( InformationToken )
    return RtlNtStatusToDosErrorNoTeb(InformationToken);
  else
    return 1359;
}
