/*
 * XREFs of NtDCompositionSetChannelCallbackId @ 0x1C0017E90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C002CF70 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetChannelCallbackId(unsigned int a1, int a2, int a3, int a4)
{
  int v7; // ebx
  struct DirectComposition::CApplicationChannel *v8; // rcx
  char v9; // dl
  char *v10; // rax
  char *v11; // r8
  struct DirectComposition::CApplicationChannel *v13; // [rsp+20h] [rbp-18h] BYREF

  v13 = 0LL;
  v7 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v13);
  if ( v7 >= 0 )
  {
    v8 = v13;
    if ( a2 )
    {
      v9 = 1;
      v10 = (char *)v13 + 676;
      v11 = (char *)v13 + 680;
    }
    else
    {
      v9 = 0;
      v10 = (char *)v13 + 668;
      v11 = (char *)v13 + 672;
    }
    v7 = 0;
    if ( a3 )
    {
      if ( !*(_DWORD *)v10 && a4 )
        goto LABEL_7;
    }
    else if ( !a4 )
    {
LABEL_7:
      *(_DWORD *)v10 = a3;
      *(_DWORD *)v11 = a4;
      if ( v9 )
        *((_BYTE *)v8 + 184) |= 0x40u;
      else
        *((_BYTE *)v8 + 184) |= 0x20u;
      goto LABEL_9;
    }
    v7 = -1073741790;
LABEL_9:
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v8)(v8);
  }
  return (unsigned int)v7;
}
