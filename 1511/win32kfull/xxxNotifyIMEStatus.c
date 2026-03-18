/*
 * XREFs of xxxNotifyIMEStatus @ 0x1C00859E8
 * Callers:
 *     NtUserNotifyIMEStatus @ 0x1C0085940 (NtUserNotifyIMEStatus.c)
 * Callees:
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     NlsKbdSendIMENotification @ 0x1C0085B00 (NlsKbdSendIMENotification.c)
 */

void __fastcall xxxNotifyIMEStatus(__int64 *a1, int a2, int a3)
{
  __int64 v3; // r9
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned int v7; // r11d
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int i; // edx
  int j; // edx
  __int64 v17; // rax
  __int64 v18; // rax

  v3 = a1[2];
  v5 = 0LL;
  if ( v3 )
  {
    if ( gpqForeground )
    {
      if ( *(__int64 **)(gpqForeground + 72LL) == a1 )
      {
        v6 = a1[31];
        v7 = gdwIMEOpenStatus;
        v8 = gdwIMEConversionStatus;
        if ( gHimcFocus != v6 || gdwIMEConversionStatus != a3 || gdwIMEOpenStatus != a2 )
        {
          gHimcFocus = a1[31];
          if ( v6 )
          {
            v8 = a3;
            gdwIMEConversionStatus = a3;
            if ( a2 )
            {
              v7 = 1;
              gdwIMEOpenStatus = 1;
            }
            else
            {
              v7 = 0;
              gdwIMEOpenStatus = 0;
              LOBYTE(a3) = 0;
            }
            v9 = *(_QWORD *)(v3 + 392);
            if ( v9 )
            {
              if ( (*(_WORD *)(v9 + 40) & 0x3FF) == 0x11 )
              {
                *(_BYTE *)(*(_QWORD *)(v3 + 384) + 244LL) &= ~1u;
                *(_BYTE *)(*(_QWORD *)(v3 + 384) + 244LL) &= ~2u;
                *(_BYTE *)(*(_QWORD *)(v3 + 384) + 244LL) &= ~4u;
                *(_BYTE *)(*(_QWORD *)(v3 + 384) + 244LL) &= ~8u;
                *(_BYTE *)(*(_QWORD *)(v3 + 384) + 244LL) &= ~0x10u;
                *(_BYTE *)(*(_QWORD *)(v3 + 384) + 244LL) &= ~0x20u;
                if ( (a3 & 1) != 0 )
                {
                  v14 = *(_QWORD *)(v3 + 384);
                  if ( (a3 & 2) != 0 )
                  {
                    *(_BYTE *)(v14 + 244) |= 4u;
                    *(_BYTE *)(*(_QWORD *)(v3 + 384) + 244LL) |= 8u;
                  }
                  else
                  {
                    *(_BYTE *)(v14 + 244) |= 0x10u;
                    *(_BYTE *)(*(_QWORD *)(v3 + 384) + 244LL) |= 0x20u;
                  }
                }
                else
                {
                  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(v3 + 384) + 244LL) |= i )
                    ++i;
                }
                if ( (a3 & 8) != 0 )
                {
                  for ( j = 0; j < 2; *(_BYTE *)(*(_QWORD *)(v3 + 384) + 245LL) |= j )
                    ++j;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 244LL) &= ~0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 244LL) &= ~0x80u;
                }
                else
                {
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 244LL) |= 0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 244LL) |= 0x80u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 245LL) &= ~1u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 245LL) &= ~2u;
                }
                v17 = *(_QWORD *)(v3 + 384);
                if ( (a3 & 0x10) != 0 )
                {
                  *(_BYTE *)(v17 + 245) |= 4u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 245LL) |= 8u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 245LL) &= ~0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 245LL) &= ~0x20u;
                }
                else
                {
                  *(_BYTE *)(v17 + 245) |= 0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 245LL) |= 0x20u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 245LL) &= ~4u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 245LL) &= ~8u;
                }
                v18 = *(_QWORD *)(v3 + 384);
                if ( (a3 & 0x20) != 0 )
                {
                  *(_BYTE *)(v18 + 246) |= 0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 246LL) |= 0x20u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 246LL) &= ~0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 246LL) &= ~0x80u;
                }
                else
                {
                  *(_BYTE *)(v18 + 246) |= 0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 246LL) |= 0x80u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 246LL) &= ~0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 384) + 246LL) &= ~0x20u;
                }
              }
              else if ( (*(_WORD *)(v9 + 40) & 0x3FF) == 0x12 )
              {
                v11 = *(_QWORD *)(v3 + 384);
                if ( (a3 & 1) != 0 )
                  *(_BYTE *)(v11 + 189) |= 8u;
                else
                  *(_BYTE *)(v11 + 189) &= ~8u;
                v12 = *(_QWORD *)(v3 + 384);
                if ( (a3 & 8) != 0 )
                  *(_BYTE *)(v12 + 189) |= 0x80u;
                else
                  *(_BYTE *)(v12 + 189) &= ~0x80u;
                v13 = *(_QWORD *)(v3 + 384);
                if ( (a3 & 0x40) != 0 )
                  *(_BYTE *)(v13 + 190) |= 8u;
                else
                  *(_BYTE *)(v13 + 190) &= ~8u;
              }
            }
          }
          v10 = *(_QWORD *)(v3 + 392);
          if ( v10 )
            v5 = *(_QWORD *)(v10 + 40);
          if ( ((*(_DWORD *)(v3 + 600) | *(_DWORD *)(*(_QWORD *)(v3 + 416) + 24LL)) & 0x800) != 0 )
          {
            xxxCallHook(8u, *a1, v5, 0xAu);
            v7 = gdwIMEOpenStatus;
            v8 = gdwIMEConversionStatus;
          }
          NlsKbdSendIMENotification(v7, v8, v5);
        }
      }
    }
  }
}
