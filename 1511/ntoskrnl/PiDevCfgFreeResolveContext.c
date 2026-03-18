/*
 * XREFs of PiDevCfgFreeResolveContext @ 0x14051414C
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x140513FDC (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgInitResolveContext @ 0x1405147B0 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140515CB0 (PiDevCfgVerifyDeviceAllowed.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     _PnpCtxRegDeleteTree @ 0x140522444 (_PnpCtxRegDeleteTree.c)
 */

void __fastcall PiDevCfgFreeResolveContext(__int64 a1)
{
  void *v2; // rcx
  unsigned int v3; // esi
  __int64 v4; // r14
  UNICODE_STRING **v5; // rdx
  UNICODE_STRING *v6; // rbx
  UNICODE_STRING *v7; // rax
  wchar_t *Buffer; // rcx
  int v9; // edx

  if ( *(_QWORD *)(a1 + 24) )
  {
    v3 = 0;
    v4 = 0LL;
    do
    {
      while ( 1 )
      {
        v5 = (UNICODE_STRING **)(v4 + *(_QWORD *)(a1 + 24));
        if ( *v5 == (UNICODE_STRING *)v5 )
          break;
        v6 = *v5;
        v7 = *(UNICODE_STRING **)&(*v5)->Length;
        if ( (UNICODE_STRING **)(*v5)->Buffer != v5 || (UNICODE_STRING *)v7->Buffer != v6 )
          __fastfail(3u);
        *v5 = v7;
        v7->Buffer = (wchar_t *)v5;
        RtlFreeAnsiString(v6 + 1);
        Buffer = v6[2].Buffer;
        if ( Buffer )
        {
          v9 = *(_DWORD *)&v6[2].Length;
          if ( (_WORD)v9 == 0x8000 )
          {
            if ( (v9 & 0x100000) != 0 )
              PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v6[2].Buffer, 0LL);
            ZwClose(v6[2].Buffer);
          }
          else
          {
            ExFreePoolWithTag(Buffer, 0);
          }
        }
        ExFreePoolWithTag(v6, 0);
      }
      ++v3;
      v4 += 16LL;
    }
    while ( v3 < 0x7F );
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
  }
  v2 = *(void **)(a1 + 16);
  if ( v2 )
    ZwClose(v2);
}
