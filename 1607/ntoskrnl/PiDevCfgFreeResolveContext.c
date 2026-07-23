/*
 * XREFs of PiDevCfgFreeResolveContext @ 0x140638FA8
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x1406359A8 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgInitResolveContext @ 0x1406398C8 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140641134 (PiDevCfgVerifyDeviceAllowed.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     _PnpCtxRegDeleteTree @ 0x140550B58 (_PnpCtxRegDeleteTree.c)
 */

void __fastcall PiDevCfgFreeResolveContext(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // r14
  UNICODE_STRING **v4; // rdx
  UNICODE_STRING *v5; // rbx
  UNICODE_STRING *v6; // rax
  wchar_t *Buffer; // rcx
  int v8; // edx
  void *v9; // rcx

  if ( *(_QWORD *)(a1 + 24) )
  {
    v2 = 0;
    v3 = 0LL;
    do
    {
      while ( 1 )
      {
        v4 = (UNICODE_STRING **)(v3 + *(_QWORD *)(a1 + 24));
        if ( *v4 == (UNICODE_STRING *)v4 )
          break;
        v5 = *v4;
        v6 = *(UNICODE_STRING **)&(*v4)->Length;
        if ( (UNICODE_STRING **)(*v4)->Buffer != v4 || (UNICODE_STRING *)v6->Buffer != v5 )
          __fastfail(3u);
        *v4 = v6;
        v6->Buffer = (wchar_t *)v4;
        RtlFreeAnsiString(v5 + 1);
        Buffer = v5[2].Buffer;
        if ( Buffer )
        {
          v8 = *(_DWORD *)&v5[2].Length;
          if ( (_WORD)v8 == 0x8000 )
          {
            if ( (v8 & 0x100000) != 0 )
              PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)v5[2].Buffer, 0LL);
            ZwClose(v5[2].Buffer);
          }
          else
          {
            ExFreePoolWithTag(Buffer, 0);
          }
        }
        ExFreePoolWithTag(v5, 0);
      }
      ++v2;
      v3 += 16LL;
    }
    while ( v2 < 0x7F );
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
  }
  v9 = *(void **)(a1 + 16);
  if ( v9 )
    ZwClose(v9);
}
