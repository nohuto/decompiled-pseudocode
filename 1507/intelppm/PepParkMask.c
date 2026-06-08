/*
 * XREFs of PepParkMask @ 0x1C00066D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00025C0 (memset.c)
 */

void __fastcall PepParkMask(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r14
  unsigned int v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+28h] [rbp-40h]
  void *v9; // [rsp+30h] [rbp-38h]
  _BYTE v10[24]; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v11; // [rsp+80h] [rbp+18h] BYREF

  if ( !PepSkipParkNotification && dword_1C000DE90 >= (unsigned int)dword_1C000D9C4 )
  {
    memset(&PepParkLists, 0, (unsigned int)(16 * dword_1C000D9C4));
    v4 = 0;
    KeInitializeEnumerationContext(v10, &unk_1C000DC58);
    if ( !(unsigned int)KeEnumerateNextProcessor(&v11, v10) )
    {
      do
      {
        v5 = v11;
        v6 = *(_QWORD *)(DevExts + 8LL * v11);
        *((_QWORD *)&PepParkLists + 2 * v4) = *(_QWORD *)(v6 + 1056);
        *((_BYTE *)&PepParkLists + 16 * v4++ + 8) = KeCheckProcessorAffinityEx(a2, v5);
      }
      while ( !(unsigned int)KeEnumerateNextProcessor(&v11, v10) );
      if ( v4 )
      {
        v8 = a1;
        v7 = v4;
        v9 = &PepParkLists;
        if ( (int)((__int64 (__fastcall *)(_QWORD, unsigned int *))qword_1C000DC30)(*(_QWORD *)(v6 + 1056), &v7) < 0 )
          PepSkipParkNotification = 1;
      }
    }
  }
}
