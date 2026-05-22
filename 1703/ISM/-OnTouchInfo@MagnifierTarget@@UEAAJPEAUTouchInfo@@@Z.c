/*
 * XREFs of ?OnTouchInfo@MagnifierTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x180082090
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?UpdatePosition@MagnifierComponent@@QEAAJUtagPOINT@@@Z @ 0x18008159C (-UpdatePosition@MagnifierComponent@@QEAAJUtagPOINT@@@Z.c)
 *     ?UpdateScale@MagnifierComponent@@QEAAJM@Z @ 0x180081618 (-UpdateScale@MagnifierComponent@@QEAAJM@Z.c)
 *     ?ToggleMagnifier@MagnifierComponent@@QEAAJUtagPOINT@@@Z @ 0x1800817E8 (-ToggleMagnifier@MagnifierComponent@@QEAAJUtagPOINT@@@Z.c)
 *     ?IsOobeDone@MagnifierTarget@@SAKXZ @ 0x180081F80 (-IsOobeDone@MagnifierTarget@@SAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MagnifierTarget::OnTouchInfo(MagnifierTarget *this, struct TouchInfo *a2)
{
  int updated; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d
  __int16 v8; // dx
  __int64 v9; // rcx
  __int64 v10; // rcx
  float v11; // xmm6_4
  __int64 v12; // rcx
  MagnifierComponent *v13; // rcx
  __int64 v14; // rcx
  int v16; // [rsp+30h] [rbp-40h] BYREF
  struct tagPOINT v17; // [rsp+34h] [rbp-3Ch]
  _DWORD v18[2]; // [rsp+40h] [rbp-30h] BYREF
  int v19; // [rsp+48h] [rbp-28h]
  int v20; // [rsp+4Ch] [rbp-24h]
  int v21; // [rsp+50h] [rbp-20h]
  struct tagPOINT v22; // [rsp+98h] [rbp+28h] BYREF
  int v23; // [rsp+A0h] [rbp+30h] BYREF

  v23 = 0;
  if ( (a2->Flags & 1) != 0
    && (updated = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 48LL))(
                    *((_QWORD *)this + 6),
                    31744LL),
        v6 = updated,
        updated < 0) )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 268;
LABEL_42:
      Template_qqq(v5, &MinInput_Warning_CheckResult, 0, v7, updated);
    }
  }
  else
  {
    updated = (*(__int64 (__fastcall **)(_QWORD, struct TouchInfo *))(**((_QWORD **)this + 6) + 32LL))(
                *((_QWORD *)this + 6),
                a2);
    v6 = updated;
    if ( updated >= 0 )
    {
      updated = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6), &v23);
      v6 = updated;
      if ( updated >= 0 )
      {
        v8 = v23;
        if ( !v23 )
        {
          *((_WORD *)this + 28) = 0;
          return v6;
        }
        if ( v23 == 1024 )
        {
          *((_WORD *)this + 28) = 1;
          return v6;
        }
        if ( !*((_BYTE *)this + 57) )
        {
          v9 = *((_QWORD *)this + 3);
          *(_QWORD *)((char *)this + 60) = *(_QWORD *)(v9 + 32);
          *((_DWORD *)this + 17) = *(_DWORD *)(v9 + 40);
          *((_BYTE *)this + 57) = 1;
        }
        if ( *(_BYTE *)(*((_QWORD *)this + 3) + 88LL) )
        {
          if ( (v8 & 0x4000) != 0 )
          {
            v10 = *((_QWORD *)this + 6);
            v11 = *((float *)this + 17);
            v18[0] = 28;
            updated = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v10 + 88LL))(v10, 12LL, v18);
            v6 = updated;
            if ( updated >= 0 )
            {
              updated = MagnifierComponent::UpdateScale(
                          *((struct tagPOINT **)this + 3),
                          v11
                        - (float)((float)((float)(v21 - v19) / (float)*(int *)(*((_QWORD *)this + 3) + 28LL)) * 8.0));
              v6 = updated;
              if ( updated < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              {
                v7 = 306;
                goto LABEL_42;
              }
            }
            else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              v7 = 301;
              goto LABEL_42;
            }
            return v6;
          }
          if ( (v8 & 0x2000) != 0 )
          {
            v12 = *((_QWORD *)this + 6);
            v22 = *(struct tagPOINT *)((char *)this + 60);
            v18[0] = 28;
            updated = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v12 + 88LL))(v12, 11LL, v18);
            v6 = updated;
            if ( updated >= 0 )
            {
              v13 = (MagnifierComponent *)*((_QWORD *)this + 3);
              v22.x += (int)(float)((float)(v18[1] - v20) / *((float *)this + 17));
              v22.y += (int)(float)((float)(v19 - v21) / *((float *)this + 17));
              updated = MagnifierComponent::UpdatePosition(v13, v22);
              v6 = updated;
              if ( updated < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              {
                v7 = 320;
                goto LABEL_42;
              }
            }
            else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              v7 = 315;
              goto LABEL_42;
            }
            return v6;
          }
        }
        if ( (v8 & 0x1000) != 0 )
        {
          v14 = *((_QWORD *)this + 6);
          v16 = 12;
          updated = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v14 + 88LL))(v14, 10LL, &v16);
          v6 = updated;
          if ( updated >= 0 )
          {
            if ( (unsigned int)MagnifierTarget::IsOobeDone() || *(_BYTE *)(*((_QWORD *)this + 3) + 88LL) )
            {
              updated = MagnifierComponent::ToggleMagnifier(*((MagnifierComponent **)this + 3), v17);
              v6 = updated;
              if ( updated < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              {
                v7 = 331;
                goto LABEL_42;
              }
            }
            else
            {
              *(struct tagPOINT *)((char *)this + 60) = v17;
              LOBYTE(v22.x) = 1;
              RtlPublishWnfStateData(WNF_OOBE_SHL_MAGNIFIER_QUERY, 0LL, &v22, 1LL, 0LL);
            }
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v7 = 327;
            goto LABEL_42;
          }
        }
        return v6;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 272;
        goto LABEL_42;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 271;
      goto LABEL_42;
    }
  }
  return v6;
}
