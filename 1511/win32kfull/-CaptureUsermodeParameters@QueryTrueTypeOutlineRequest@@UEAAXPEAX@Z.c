/*
 * XREFs of ?CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z @ 0x1C02D7E00
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x1C02D764C (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 */

void __fastcall QueryTrueTypeOutlineRequest::CaptureUsermodeParameters(QueryTrueTypeOutlineRequest *this, _QWORD *a2)
{
  struct _FONTOBJ *v3; // rax
  _OWORD *v4; // rsi
  const void *v5; // r14
  int v6; // edi
  void *v7; // rcx
  unsigned int v8; // r9d
  unsigned int v9; // ecx
  unsigned int *v10; // r11
  unsigned int v11; // r8d
  unsigned int v12; // edx
  unsigned __int64 v13; // r10
  unsigned int v14; // r14d
  _OWORD *v15; // rax

  v3 = (struct _FONTOBJ *)a2[1];
  v4 = (_OWORD *)a2[3];
  v5 = (const void *)a2[5];
  v6 = *((_DWORD *)a2 + 12);
  if ( v6 >= 0
    && v3 == *((struct _FONTOBJ **)this + 10)
    && FontDriverDdiRequest::CaptureUsermodeFontObj(*((struct _FONTOBJ **)this + 4), v3)
    && v5 == *((const void **)this + 12) )
  {
    v7 = (void *)*((_QWORD *)this + 8);
    if ( v7 && v6 > 0 )
    {
      memmove(v7, v5, *((unsigned int *)this + 14));
      v8 = *((_DWORD *)this + 14);
      if ( v6 < v8 )
        v8 = v6;
      v9 = 0;
LABEL_10:
      if ( v9 + 16 >= v9 && v9 + 16 <= v8 )
      {
        v10 = (unsigned int *)(*((_QWORD *)this + 8) + v9);
        v11 = *v10;
        if ( *v10 >= 0x10 && v8 - v9 >= v11 )
        {
          v12 = 16;
          while ( v12 + 12 >= v12 )
          {
            if ( v11 < v12 + 12 )
              break;
            v13 = 8LL * *(unsigned __int16 *)((char *)v10 + v12 + 2);
            if ( v13 > 0xFFFFFFFF )
              break;
            v14 = v13 + 4;
            if ( (int)v13 + 4 < (unsigned int)v13 || v11 - v12 < v14 )
              break;
            v12 += v14;
            if ( v12 >= v11 )
            {
              v9 += v11;
              if ( v9 < v8 )
                goto LABEL_10;
              goto LABEL_22;
            }
          }
        }
      }
    }
    else
    {
LABEL_22:
      v15 = (_OWORD *)*((_QWORD *)this + 6);
      if ( v15 )
      {
        if ( v4 != *((_OWORD **)this + 11) )
          return;
        *v15 = *v4;
        v15[1] = v4[1];
        v15[2] = v4[2];
        v15[3] = v4[3];
      }
      else if ( v4 )
      {
        return;
      }
      *((_DWORD *)this + 18) = v6;
    }
  }
}
